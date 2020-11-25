int botoia1= 2; 
int botoia2= 3; 
int botoia3= 4;
int relay1= 10;
int relay2= 11;
int relay3= 12;
int balioa =0;

// Sarrera-Irteeren Inizializazioa

void setup() 
  {
 Serial.begin (9600);
 pinMode (botoia1, INPUT);
 pinMode (relay1, OUTPUT);
 digitalWrite(relay1,HIGH); //Errelea itzali

 Serial.begin (9600);
  pinMode (botoia2, INPUT);
 pinMode (relay2, OUTPUT);
 digitalWrite(relay2, HIGH); //Errelea itzali

 Serial.begin (9600);
  pinMode (botoia3, INPUT);
 pinMode (relay3, OUTPUT);
 digitalWrite(relay3,HIGH); //Errelea itzali
 
  }


// Programa nagusia

void loop() 
  {

    balioa = digitalRead(botoia1); //Pultsadorea irakurri
    digitalWrite(relay1,!balioa);
    Serial.print ("1Pultsagailuaren balioa= ");
    Serial.println (balioa);
    delay (100);


    balioa = digitalRead(botoia2); //Pultsadorea irakurri
    digitalWrite(relay2,!balioa);
    Serial.print ("1Pultsagailuaren balioa= ");
    Serial.println (balioa);
    delay (100);


    balioa = digitalRead(botoia3); //Pultsadorea irakurri
    digitalWrite(relay3,!balioa);
    Serial.print ("1Pultsagailuaren balioa= ");
    Serial.println (balioa);
    delay (100);

    

 }
