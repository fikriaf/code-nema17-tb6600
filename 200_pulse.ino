int en = 8;
int dir = 9;
int pul = 10;

void setup() {
  pinMode(en, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(pul, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(en, LOW);
  digitalWrite(dir, HIGH);
 
  unsigned long startTime = micros();

  for (int i=0; i<2548; i++) {
    digitalWrite(pul, HIGH);
    delayMicroseconds(500);
    digitalWrite(pul, LOW);
    delayMicroseconds(500);
  }
  
  unsigned long endTime = micros();

  float durasiProses = (endTime - startTime) / 1000000.0;

  Serial.print("Lama Proses: ");
  Serial.print(durasiProses);
  Serial.print(" detik");
  Serial.print("\n");
  delay(1000);
}
