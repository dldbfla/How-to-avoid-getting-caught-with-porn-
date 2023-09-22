First, connect the RFID module and Arduino with SDA->10,SCK->13,MOSI->11,MISO->12,IRQ->X,GND->GND,RSP->9,3.3V->3.3v.
Required libraries
Arduino:

SPI library:

A library for SPI communication, required if you are using the Arduino's SPI communication.
It is included in the Arduino IDE by default.
MFRC522 Library:

A library for controlling the MFRC522 RFID/NFC reader module.
It can be installed from the Arduino Library Manager.
In the Arduino IDE, go to "Sketch -> Include Library -> Manage Libraries" from the menu, then search for "MFRC522" to install it.
After installing these two libraries, you should be able to compile and upload the given code to your Arduino normally. If you are still having problems after installing these libraries, you may need to check the version and board settings of your Arduino IDE and install the necessary drivers.


