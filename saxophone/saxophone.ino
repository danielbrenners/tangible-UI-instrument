
#include <MIDI.h>
  
void setup() 
{          
  MIDI.begin();
  Serial.begin(115200);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  
  pinMode(A7, INPUT);
  pinMode(A8, INPUT);
  pinMode(A9, INPUT);
  pinMode(A10, INPUT);
  pinMode(A11, INPUT);
}


void loop() 
{  
  const int MID = 1000;                 //threshold for a button being pressed
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  
  int leftRing = analogRead(A0);       // where each finger is being read. (i.e. port A0 is measuring the voltage, if it spikes to 1000, it's "on")
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
  
  int delayTime = 5;
  
  digitalWrite(13, HIGH);    //Send HIGH voltage from both thumbs
  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  
  analogRead(A0);             //Read from left finger sensors
  analogRead(A1);
  analogRead(A2);
  analogRead(A3);
  analogRead(A4);
  
  analogRead(A7);            //Read from right finger sensors
  analogRead(A8);
  analogRead(A9);
  analogRead(A10);
  analogRead(A11);
  
 
  /////////////////////////////////////////
//  /////////////////////////////////////////
//  Serial.print(leftPinky);
//  Serial.print(" ");
//  Serial.print(leftRing);
//  Serial.print(" ");
//  Serial.print(leftMiddle);
//  Serial.print(" ");
//  Serial.print(leftIndex);
//  Serial.print(" ");
//  Serial.print(leftSideIndex);
//  Serial.print(" ");
//  Serial.print(rightUnderIndex);
//  Serial.print(" ");
//  Serial.print(rightIndex);
//  Serial.print(" ");
//  Serial.print(rightMiddle);
//  Serial.print(" ");
//  Serial.print(rightRing);
//  Serial.print(" ");
//  Serial.print(rightPinky);
//  Serial.print("\n");
//  /////////////////////////////////////////
  /////////////////////////////////////////
        
        
        if (state() == 50)
        { 
          MIDI.sendNoteOn(50, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 50)
              delay(delayTime);
            else
             {
                MIDI.sendNoteOff(50, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 51)
        { 
          MIDI.sendNoteOn(51, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 51)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(51, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 52)
        { 
          MIDI.sendNoteOn(52, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 52)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(52, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 53)
        { 
          MIDI.sendNoteOn(53, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 53)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(53, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 54)
        { 
          MIDI.sendNoteOn(54, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 54)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(54, 58, 1);
                break;
              }
          }  
        }
       else if (state() == 55)
        { 
          MIDI.sendNoteOn(55, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 55)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(55, 58, 1);
                break;
              }
          }  
        }  
        else if (state() == 56)
        { 
          MIDI.sendNoteOn(56, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 56)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(56, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 57)
        { 
          MIDI.sendNoteOn(57, 58, 1);         
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 57)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(57, 58, 1);
                break;
              }
          }  
        }  
        else if (state() == 58)
        { 
          MIDI.sendNoteOn(58, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 58)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(58, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 59)
        {  
          MIDI.sendNoteOn(59, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 59)
              delay(delayTime);
            else
            {
              MIDI.sendNoteOff(59, 58, 1);
              break;
            }
          }
        }  
        else if (state() == 60)
        {  
          MIDI.sendNoteOn(60, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 60)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(60, 58, 1);
                break;
              }
          }

        }  
        else if (state() == 61)
        { 
          MIDI.sendNoteOn(61, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 61)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(61, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 62)
        { 
          MIDI.sendNoteOn(62, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 62)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(62, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 63)
        { 
          MIDI.sendNoteOn(63, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 63)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(63, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 64)
        { 
          MIDI.sendNoteOn(64, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 64)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(64, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 65)
        { 
          MIDI.sendNoteOn(65, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 65)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(65, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 66)
        { 
          MIDI.sendNoteOn(66, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 66)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(66, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 67)
        { 
          MIDI.sendNoteOn(67, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 67)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(67, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 68)
        { 
          MIDI.sendNoteOn(68, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 68)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(68, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 69)
        { 
          MIDI.sendNoteOn(69, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 69)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(69, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 70)
        { 
          MIDI.sendNoteOn(70, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 70)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(70, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 71)
        { 
          MIDI.sendNoteOn(71, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 71)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(71, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 72)
        { 
          MIDI.sendNoteOn(72, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 72)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(72, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 73)
        { 
          MIDI.sendNoteOn(73, 58, 1);
          for (int i=0; i<1000; i++)
          {
            if ((state()) == 73)
              delay(delayTime);
            else
              {
                MIDI.sendNoteOff(73, 58, 1);
                break;
              }
          }  
        }
        else if (state() == 1)
        {
          MIDI.sendNoteOff(0, 0, 1);
        }
       
       
      delay(10);                // PREVENTS TWO NOTES BEING PLAYED AT THE SAME TIME!
       
}

