// C++ code
//
int ValorLido = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  ValorLido = analogRead(A0);
  Serial.println(ValorLido);
  delay(ValorLido); // Wait for ValorLido millisecond(s)
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(ValorLido); // Wait for ValorLido millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
}