const byte BUTSU = 9;
const byte BOSATSU = 8;
const byte ENGAKU = 7;
const byte SHOMON = 6;
const byte TEN = 5;
const byte NIN = 4;
const byte SHURA = 3;
const byte CHIKUSHO = 2;
const byte GAKI = 1;
const byte JIKOKU = 0;

byte etatVie_1 = BUTSU;
byte etatVie_2 = BUTSU;
byte etatVie[2] = {etatVie_1, etatVie_2};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(etatVie[0]); Serial.println(etatVie[1]);
}

int captation() {
  int val; int pin;
  for (byte a=0; a<8; a++) {
    pin = 
    val = analogRead(a);
  }
}

