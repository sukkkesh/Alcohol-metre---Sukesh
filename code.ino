int smoke = 0;
int i;
void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  for(i=2;i<=11;i++)
  pinMode(i, OUTPUT);
  
}
void loop()
{
  smoke = analogRead(A5);
  //Serial.println(smoke);
  //from sample expt max and min value of sensor is 120 and 20 respectively
 if(smoke<30)
 {
   digitalWrite(2,HIGH);
   for(i=2;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=30 && smoke<40)
 {
   for(i=2;i<=3;i++)
     digitalWrite(i,HIGH);
   for(i=4;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=40 && smoke<50)
 {
   for(i=2;i<=4;i++)
     digitalWrite(i,HIGH);
   for(i=5;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=50 && smoke<60)
 {
   for(i=2;i<=5;i++)
     digitalWrite(i,HIGH);
   for(i=6;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=60 && smoke<70)
 {
   for(i=2;i<=6;i++)
     digitalWrite(i,HIGH);
   for(i=7;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=70 && smoke<80)
 {
   for(i=2;i<=7;i++)
     digitalWrite(i,HIGH);
   for(i=8;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=80 && smoke<90)
 {
   for(i=2;i<=8;i++)
     digitalWrite(i,HIGH);
   for(i=9;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=90 && smoke<100)
 {
   for(i=2;i<9;i++)
     digitalWrite(i,HIGH);
   for(i=10;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=100 && smoke<110)
 {
   for(i=2;i<=10;i++)
     digitalWrite(i,HIGH);
   for(i=11;i<=11;i++)
     digitalWrite(i,LOW);
 }
  if(smoke>=110)
 {
   for(i=2;i<=11;i++)
     digitalWrite(i,HIGH);
 }
     
   
}