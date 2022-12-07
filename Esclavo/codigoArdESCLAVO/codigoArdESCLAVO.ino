char data;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
}

void loop() {
  if(Serial.available()>0){
    data = Serial.read();
    switch(data){
      case '1':
      digitalWrite(13,HIGH);
      break;
      case '5':
      digitalWrite(13,LOW);
      break;
      case '2':
      digitalWrite(12,HIGH);
      break;
      case '6':
      digitalWrite(12,LOW);
      break;
      case '3':
      digitalWrite(10,HIGH);
      break;
      case '7':
      digitalWrite(10,LOW);
      break;
      case '4':
      digitalWrite(6,HIGH);
      break;
      case '8':
      digitalWrite(6,LOW);
      break;
      case 'a':
      digitalWrite(11,HIGH);
      break;
      case 'b':
      digitalWrite(11,LOW);
      break;
      case 'c':
      digitalWrite(9,HIGH);
      break;
      case 'd':
      digitalWrite(9,LOW);
      break;
      case 'e':
      digitalWrite(8,HIGH);
      break;
      case 'f':
      digitalWrite(8,LOW);
      break;
      case 'g':
      digitalWrite(7,HIGH);
      break;
      case 'h':
      digitalWrite(7,LOW);
      break;
      case 'i':
      digitalWrite(5,HIGH);
      break;
      case 'j':
      digitalWrite(5,LOW);
      break;
      case 'k':
      digitalWrite(4,HIGH);
      break;
      case 'l':
      digitalWrite(4,LOW);
      break;
      case 'm':
      digitalWrite(3,HIGH);
      break;
      case 'n':
      digitalWrite(3,LOW);
      break;
    }
  }
}
