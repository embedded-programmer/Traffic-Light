
#define RED_PIN 7
#define YELLOW_PIN 6
#define GREEN_PIN 5

#define RED_TIME 5000
#define YELLOW_TIME 2000
#define GREEN_TIME 5000

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN,HIGH);
  digitalWrite(YELLOW_PIN,LOW);
  digitalWrite(GREEN_PIN,LOW);
  delay(RED_TIME);

  digitalWrite(RED_PIN,LOW);
  digitalWrite(YELLOW_PIN,LOW);
  digitalWrite(GREEN_PIN,HIGH);
  delay(GREEN_TIME);

  digitalWrite(RED_PIN,LOW);
  digitalWrite(YELLOW_PIN,HIGH);
  digitalWrite(GREEN_PIN,LOW);
  delay(YELLOW_TIME);
}
