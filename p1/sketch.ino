// inisialisasi variabel lampu pada pin
int ledj = 10;
int ledk = 9;
int ledm = 8;

void setup() {
  // inisialisasi ppin sebagai output
  Serial.begin(9600);
  pinMode(ledj, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledm, OUTPUT);
}

void loop() {
  // status tiap pin yang memberikan reaksi pada lampu (high: nyala ; low: mati)
  digitalWrite(ledj, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledm, LOW);
  Serial.println("Hijau Menyala");
  delay(3000);

  digitalWrite(ledj, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledm, LOW);
  Serial.println("Kuning Menyala");
  delay(1000);

  digitalWrite(ledj, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledm, HIGH);
  Serial.println("Merah Menyala");
  delay(2000);
}
