// C++ code
//

int ledPIN01 = 13; // pino do Led vermelho 
int ledPIN02 =12; // pino do LED amarelo
  
void setup()
{
  pinMode(ledPIN01, OUTPUT);
  pinMode(ledPIN02, OUTPUT);
}

void loop()
{
  digitalWrite(ledPIN01, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPIN01, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(ledPIN02, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPIN02, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}
