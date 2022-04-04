int LED=8;
int inpin=A0;
int val;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(inpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(val);
  val=analogRead(inpin);
  if (val<=512){
  Serial.println("on");
  digitalWrite(LED, HIGH);
  }
  else{
  Serial.println("off");
  digitalWrite(LED, LOW);
  }
  delay(250);
}
