#define echo 33
#define trig 25

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Ultra Sonic Sensors
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  int dist=pulseIn(echo,HIGH);
  Serial.println(dist/58);


  delay(5000); // this speeds up the simulation
}
