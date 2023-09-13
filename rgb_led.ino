int blue;
int green;
int red;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  blue = analogRead(A1);
  green = analogRead(A0);
  red = analogRead(A2);
  analogWrite(10, blue/4);
  analogWrite(9, green/4);
  analogWrite(11, red/4);
}