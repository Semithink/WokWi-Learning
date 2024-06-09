

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
  } else {
    digitalWrite(ledb, LOW);
  }

  if(btnstatem == HIGH){
    digitalWrite(ledm, HIGH);
  } else {
    digitalWrite(ledm, LOW);
  }
}
