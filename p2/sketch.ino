

int ledb = 12;
int ledm = 13;

int btnb = 10;
int btnm = 11;

int btnstateb = 0;
int btnstatem = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledb, OUTPUT);
  pinMode(ledm, OUTPUT);
  pinMode(btnb, INPUT);
  pinMode(btnm, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnstateb = digitalRead(btnb);
  btnstatem = digitalRead(btnm);

  if(btnstateb == HIGH){
    digitalWrite(ledb, HIGH);
    digitalWrite(ledm, LOW);
    delay(500);
    digitalWrite(ledb, LOW);
    digitalWrite(ledm, HIGH);
    delay(500);
  } else {
    digitalWrite(ledb, LOW);
    digitalWrite(ledm, LOW);
  }

  if(btnstatem == HIGH){
    digitalWrite(ledm, HIGH);
  } else {
    digitalWrite(ledm, LOW);
  }
}
