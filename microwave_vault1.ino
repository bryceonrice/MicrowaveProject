// Declaring analog pin names correlating to letter 1 - 4 in our word and setting value
int pin_one = A0;
int pin_two = A1;
int pin_three = A2;
int pin_four = A3;
int val_one;
int val_two;
int val_three;
int val_four;

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop()
{
  int sensorValue = analogRead(A1);
 
  val_one = analogRead(pin_one);
  val_two = analogRead(pin_two);
  val_three = analogRead(pin_three);
  val_four = analogRead(pin_four);

  Serial.println(sensorValue);
  delay(1);

 if (val_one > 1000) digitalWrite(2, HIGH);
 else digitalWrite(2, LOW);

  if (val_two < 1000 && val_two > 970 ) digitalWrite(3, HIGH);
 else digitalWrite(3, LOW);

  if (val_three > 1000) digitalWrite(4, HIGH);
 else digitalWrite(4, LOW);

  if (val_four > 1000) digitalWrite(5, HIGH);
 else digitalWrite(5, LOW);

}
