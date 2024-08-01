int temp = 120; //variable declaration
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT); //01111011
  pinMode(led4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, 1);
  digitalWrite(led4, 0);
  delay(temp);
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  delay(temp);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  delay(temp); 
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
  delay(temp);
  digitalWrite(led4, 0);
  digitalWrite(led3, 1);
  delay(temp); 
  digitalWrite(led3, 0);
  digitalWrite(led2, 1);
  delay(temp);
  digitalWrite(led2, 0);

 
}
