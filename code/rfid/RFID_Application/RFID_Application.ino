#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() 
{
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  
  Serial.println("Sila Sentuhkan Kad...");
  Serial.println();

}
void loop() 
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }

  Serial.print("UID tag :"); //paparkan nombor UID
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Mesej : ");
  content.toUpperCase();
  if (content.substring(1) == "XX XX XX XX") //tukarkan dengan nombor UID
  {
    Serial.println("Akses Berjaya");
  }
 
 else   {
    Serial.println("Akses Tidak Dibenarkan");
  }
}
