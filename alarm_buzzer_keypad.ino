//MIERDA DEL BUZZER HASTA LINE 180
#define NOTE_B0 31  
#define NOTE_C1 33  
#define NOTE_CS1 35  
#define NOTE_D1 37  
#define NOTE_DS1 39  
#define NOTE_E1 41  
#define NOTE_F1 44  
#define NOTE_FS1 46  
#define NOTE_G1 49  
#define NOTE_GS1 52  
#define NOTE_A1 55  
#define NOTE_AS1 58  
#define NOTE_B1 62  
#define NOTE_C2 65  
#define NOTE_CS2 69  
#define NOTE_D2 73  
#define NOTE_DS2 78  
#define NOTE_E2 82  
#define NOTE_F2 87  
#define NOTE_FS2 93  
#define NOTE_G2 98  
#define NOTE_GS2 104  
#define NOTE_A2 110  
#define NOTE_AS2 117  
#define NOTE_B2 123  
#define NOTE_C3 131  
#define NOTE_CS3 139  
#define NOTE_D3 147  
#define NOTE_DS3 156  
#define NOTE_E3 165  
#define NOTE_F3 175  
#define NOTE_FS3 185  
#define NOTE_G3 196  
#define NOTE_GS3 208  
#define NOTE_A3 220  
#define NOTE_AS3 233  
#define NOTE_B3 247  
#define NOTE_C4 262  
#define NOTE_CS4 277  
#define NOTE_D4 294  
#define NOTE_DS4 311  
#define NOTE_E4 330  
#define NOTE_F4 349  
#define NOTE_FS4 370  
#define NOTE_G4 392  
#define NOTE_GS4 415  
#define NOTE_A4 440  
#define NOTE_AS4 466  
#define NOTE_B4 494  
#define NOTE_C5 523  
#define NOTE_CS5 554  
#define NOTE_D5 587  
#define NOTE_DS5 622  
#define NOTE_E5 659  
#define NOTE_F5 698  
#define NOTE_FS5 740  
#define NOTE_G5 784  
#define NOTE_GS5 831  
#define NOTE_A5 880  
#define NOTE_AS5 932  
#define NOTE_B5 988  
#define NOTE_C6 1047  
#define NOTE_CS6 1109  
#define NOTE_D6 1175  
#define NOTE_DS6 1245  
#define NOTE_E6 1319  
#define NOTE_F6 1397  
#define NOTE_FS6 1480  
#define NOTE_G6 1568  
#define NOTE_GS6 1661  
#define NOTE_A6 1760  
#define NOTE_AS6 1865  
#define NOTE_B6 1976  
#define NOTE_C7 2093  
#define NOTE_CS7 2217  
#define NOTE_D7 2349  
#define NOTE_DS7 2489  
#define NOTE_E7 2637  
#define NOTE_F7 2794  
#define NOTE_FS7 2960  
#define NOTE_G7 3136  
#define NOTE_GS7 3322  
#define NOTE_A7 3520  
#define NOTE_AS7 3729  
#define NOTE_B7 3951  
#define NOTE_C8 4186  
#define NOTE_CS8 4435  
#define NOTE_D8 4699  
#define NOTE_DS8 4978  
#define REST 0  

 // change tempo to make the song slower or faster  
 int tempo1 = 140;  
 int tempo2 = 180;  
 int tempo3 = 140;  

 int buzzer = A0;  


 int melody1[] = {  
  // Score available at https://musescore.com/user/8221/scores/26906  
  NOTE_C4,4, NOTE_C4,8,   
  NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,  
  NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8,   
  NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,  
  NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,  
  NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4,   
  NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,  
  NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,  
  NOTE_F4,-2,  
 };  
 int melody2[] = {  
  // Score available at https://musescore.com/user/29944637/scores/5266155  
  NOTE_E5, 8, NOTE_D5, 8, NOTE_FS4, 4, NOTE_GS4, 4,   
  NOTE_CS5, 8, NOTE_B4, 8, NOTE_D4, 4, NOTE_E4, 4,   
  NOTE_B4, 8, NOTE_A4, 8, NOTE_CS4, 4, NOTE_E4, 4,  
  NOTE_A4, 2,   
 };  
 int melody3[] = {  
  // Score available at https://musescore.com/user/6208766/scores/1497501  
  NOTE_C5,4, //1  
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4, 
  NOTE_E5,2, NOTE_E5,4,  
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,  
  NOTE_C5,2, NOTE_A5,4,  
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,  
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,   
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,  
  NOTE_E5,2, NOTE_E5,4,  
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,  
  NOTE_C5,2, NOTE_A5,4, 
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,  
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,   
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,   
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, REST,4  
 };  

 int notes1 = sizeof(melody1) / sizeof(melody1[0]) / 2;  
 int notes2 = sizeof(melody2) / sizeof(melody2[0]) / 2;  
 int notes3 = sizeof(melody3) / sizeof(melody3[0]) / 2;  

 int wholenote1 = (60000 * 4) / tempo1;  
 int wholenote2 = (60000 * 4) / tempo2;  
 int wholenote3 = (60000 * 4) / tempo3;  

 int divider = 0, noteDuration = 0;  


//EL SEGMENT DIGIT1 NO SIRVE ASI QUE SOLO SE USAN LOS 3 ULTIMOS DIGITOS DEL DISPLAY (creo)
//variables que identifican a los segmentos del display con un pin del arduino y otras
int D1 = 1;
int D2 = 2;
int D3 = 3;
int D4 = 4;
int A = 5;
int B = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 6;
int G = 11;
int DP = 12; 
String resultado = "";
//incluir sevseg.h
#include "SevSeg.h" 
#include "Keypad.h"

const byte ROWS = 4;
const byte COLS = 3;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'},
};
byte rowPins[ROWS] = {0, 13, A1, A2};
byte colPins[COLS] = {A3, A4, A5};

Keypad matrix = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
//inicia SevSeg
SevSeg sevseg;
//dar datos de mi display al la libreria
byte numDigits = 4;
byte digitPins[] = {1,2,3,4};
byte segmentPins[] = {A,B,C,D,E,F,G,DP};
bool resistorsOnSegments = true;
byte hardwareConfig = COMMON_ANODE;
void setup() {
  // put your setup code here, to run once:
sevseg.begin(hardwareConfig,numDigits,digitPins,segmentPins,resistorsOnSegments);
sevseg.setBrightness(90);
Serial.begin(9600);
//pinMode del pin analogo que controlara el buzzer
pinMode(A0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (true) {
    int teclaPress = matrix.getKey();
teclaPress = teclaPress - 48;
if(teclaPress == -6){
  Serial.println(resultado);
  int resultadoInt = resultado.toInt();
  break;
}else if(teclaPress != -48){
  resultado += teclaPress;
}
  }
int resultadoInt = resultado.toInt();

// detener el serial para que escribas algo


//userInput sera la int que lea el serial
if(resultadoInt <= 9999 && resultadoInt > 0){
       
  //mientras que el userInput es mayor que 0 se realizaran estas acciones
  while(resultadoInt > 0){
    //sevseg.setNumer = el numero que va a mostrar el display
    sevseg.setNumber(resultadoInt);
    //FOR loop para que se repita 250 veces las lineas 51 y 52
    for (int i = 0; i < 250; i++) {
sevseg.refreshDisplay();
delay(5);}

//luego de terminado 1 segundo de referescar 250 veces el display le resta 1 al userInput, si sigue siendo mayor que 0 sigue
   sevseg.refreshDisplay();
   resultadoInt = resultadoInt - 1;
   sevseg.refreshDisplay();
  }
  //al salir del while loop (que el userInput sea menor que 0) se escribe el voltaje para el buzzer y se apaga el display con sevseg.blank()
  sevseg.blank();
      for (int thisNote = 0; thisNote < notes3 * 2; thisNote = thisNote + 2) {  
        divider = melody3[thisNote + 1];  
        if (divider > 0) {  
          noteDuration = (wholenote3) / divider;  
        }
        else if (divider < 0) {  
          noteDuration = (wholenote3) / abs(divider);  
          noteDuration *= 1.5;
        }  
        tone(buzzer, melody3[thisNote], noteDuration * 0.9);  
        delay(noteDuration);  
        noTone(buzzer);  
      }  
  
  //el else del if
}else{
 
}


}
