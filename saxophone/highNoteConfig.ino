
int highDPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (/*leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO && */leftMiddle < UPPERHI && leftMiddle > UPPERLO //&& leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing>=MID /*&& rightMiddle >= MID && rightIndex>= MID && rightUnderIndex < OFF*/)
      return 62;
  else
      return 1;
}


int highDSharpPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (/*leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO && */leftMiddle < UPPERHI && leftMiddle > UPPERLO //&& leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky >=MID && rightRing>=MID /*&& rightMiddle >= MID && rightIndex>= MID && rightUnderIndex < OFF*/)
      return 63;
  else
      return 1;
}


int highEPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (/*leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO && */leftMiddle < UPPERHI && leftMiddle > UPPERLO //&& leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle >= MID && rightIndex>= MID /*&& rightUnderIndex < OFF*/)
      return 64;
  else
      return 1;
}


int highFPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (/*leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO && */leftMiddle < UPPERHI && leftMiddle > UPPERLO //&& leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle < OFF && rightIndex>= MID /*&& rightUnderIndex < OFF*/)
      return 65;
  else
      return 1;
}


int highFSharpPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (/*leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO && */leftMiddle < UPPERHI && leftMiddle > UPPERLO //&& leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle >=MID && rightIndex < OFF /*&& rightUnderIndex < OFF*/) 
      return 66;
  else
      return 1;
}


int highGPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < UPPERHI && leftRing >UPPERLO// && leftMiddle < UPPERHI && leftMiddle > UPPERLO && leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 67;
  else
      return 1;
}


int highGSharpPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky >= MID && leftRing < UPPERHI && leftRing >UPPERLO// && leftMiddle < UPPERHI && leftMiddle > UPPERLO && leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 68;
  else
      return 1;
}


int highAPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < UPPERHI && leftMiddle > UPPERLO && leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF && rightUnderIndex < OFF)   
      return 69;
  else
      return 1;
}


int highASharpPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < UPPERHI && leftMiddle > UPPERLO && leftIndex < UPPERHI && leftIndex > UPPERLO && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF && rightUnderIndex >= MID)   
      return 70;
  else
      return 1;
}


int highBPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < OFF && leftIndex > UPPERLO && leftIndex <UPPERHI && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 71;
  else
      return 1;
}


int highCPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle > UPPERLO && leftMiddle < UPPERHI && leftIndex< OFF && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 72;
  else
      return 1;
}


int highCSharpPosition()
{
  const int MID = 1000;                 
  const int OFF = 200;
  const int UPPERHI = 700; 
  const int UPPERLO = 400;
  int leftRing = analogRead(A0);      
  int leftMiddle = analogRead(A1);
  int leftIndex = analogRead(A2);
  int leftPinky = analogRead(A3);
  int leftSideIndex = analogRead(A4);
  int rightIndex = analogRead(A7);
  int rightRing = analogRead(A8);
  int rightMiddle = analogRead(A9);
  int rightPinky = analogRead(A10);                
  int rightUnderIndex = analogRead(A11);
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < OFF && leftIndex< OFF && leftSideIndex > UPPERLO && leftSideIndex < UPPERHI
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 73;
  else
      return 1;
}

