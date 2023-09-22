import serial
import os

# Set the serial port (change to the port your Arduino is connected to)
ser = serial.Serial('COM3', 9600)

while True:
    # Reading data from an Arduino
    card_id = ser.readline().strip().decode('utf-8')

    #Open an excel file based on card ID (card ID and file path must be matched)
    if card_id == '12345678':
        excel_file_path = 'C:\\경로\\파일.xlsx'  # Modify the file path to the path of the actual file
        if os.path.exists(excel_file_path):
            os.system(f'start excel "{excel_file_path}"')
