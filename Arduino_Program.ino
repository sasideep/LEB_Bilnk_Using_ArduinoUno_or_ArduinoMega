/*
Program by Sasideep Jagarlamudi
Contact Information: j.sasideep@gmail.com and +91-7989860379 (Call & WhatsApp)
*/

const int LED= 13; // considering 13 pin as a LED

void setup()
{
//One time run program
  pinMode(LED,OUTPUT); // Assigning 13 digital pin as output pin
}

void loop()
{
digitalWrite(LED,HIGH); // This command make 13 pin as high so that led will glow
delay(1000); // this command used for wait for 1 second
digitalWrite(LED,LOW); //This command make 13 pin as low  so that led will off
delay(1000); // this command used for wait for 1 second
}
