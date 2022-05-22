/********************************************************************/
/*                     Resistance Calculator                       */   
/*                                                                 */
/*******************************************************************/

// Variable declaration and pin assignment
const int Pushbutton1 = 2;
const int Pushbutton2 = 3;
const int Pushbutton3 = 4;
const int Pushbutton4 = 5;

const int Resval1 = A0;
const int Resval2 = A1;
const int Resval3 = A2;
const int Resval4 = A3;

float resval = 0.0;
int temp = 0;
float InputVol;
float InputCur;

// Pin mode configuration and enabling serial communication
void setup() {

  pinMode(Resval1, INPUT);
  pinMode(Resval2, INPUT);
  pinMode(Resval3, INPUT);
  pinMode(Resval4, INPUT);
  pinMode(Pushbutton1, INPUT);
  pinMode(Pushbutton2, INPUT);
  pinMode(Pushbutton3, INPUT);
  pinMode(Pushbutton4, INPUT);

 Serial.begin(9600);
 
  Serial.println("Resistance Calculator!!!");
  InputVol = 5.0;    // ideal input voltage = 5V
  InputCur = 0.027;  // assumption of input current in the range of 20 to 30 mA 

}
 
// main routine
void loop() {

  if(digitalRead(Pushbutton1) == HIGH)
  {
    resval = digitalRead(Resval1);
    ResistanceCal( resval);
    Serial.println("For Red LED");
     Serial.print("Resistance Value:");
     Serial.print(temp);
     Serial.println(" Ω");
  }else if(digitalRead(Pushbutton2) == HIGH)
  {
    resval = digitalRead(Resval2);
    ResistanceCal(resval );
     Serial.println("For Green LED");
     Serial.print("Resistance Value:");
     Serial.print(temp);
     Serial.println(" Ω");
  }else if(digitalRead(Pushbutton3) == HIGH)
  {
    resval = digitalRead(Resval3);
    ResistanceCal(resval );
    Serial.println("For Orange LED");
     Serial.print("Resistance Value:");
     temp -= 60;
     Serial.print(temp);
     Serial.println(" Ω");
  }else if(digitalRead(Pushbutton4) == HIGH)
  {
    resval = digitalRead(Resval4);
    ResistanceCal( resval );
    Serial.println("For Orange LED");
     Serial.print("Resistance Value:");
     temp -= 100; 
     Serial.print(temp);
     Serial.println(" Ω");
  }

  delay(500);    
}

// Function which calulates the resistance value based on the measure voltage across the unknown resister
float ResistanceCal(int resval )
{
 temp = ((InputVol - resval ) /  InputCur) ; // ohm's law V= IR ==> R = V/I
 return temp;
}