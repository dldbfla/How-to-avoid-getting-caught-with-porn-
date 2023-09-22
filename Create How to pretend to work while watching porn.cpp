#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9
#define SS_PIN 10

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("Ready to read card...");
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    Serial.println("Card detected!");
    String cardId = "";
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      cardId += String(mfrc522.uid.uidByte[i], HEX);
    }
    Serial.println("Card ID: " + cardId);
    Serial.println("Opening Excel...");
    Serial.println(cardId);  // Send card ID to the computer
    delay(1000);  // You can adjust the delay as needed
  }
}
