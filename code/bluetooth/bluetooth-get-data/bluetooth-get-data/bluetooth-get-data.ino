/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: READ DATA 
*/

int Value; //Membuat hasil suhu dengan bilangan desimal
int Pin = 0; //Mendefinisikan Output dari IC LM35 ke Analog input

void setup() {
  Serial.begin(9600); //Sesuaikan dengan Baudrate Modul Bluetooth anda!
}

void loop() {
  Value = analogRead(Pin);
  
  Serial.println(Value); //Tampilkan hasil suhu sebenarnya
  delay(1000); //Pergantian hasil suhu setiap 1 detik
}


/*
 *TEST STATUS : QUALIFIED
 */
