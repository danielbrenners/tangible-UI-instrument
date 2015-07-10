
int dPosition()
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
      
  if  (/*leftPinky < OFF && leftRing >= MID && */leftMiddle >= MID// && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing>=MID && rightMiddle >= MID && rightIndex>= MID /*&& rightUnderIndex < OFF*/)
      return 50;
  else
      return 1;
}


int dSharpPosition()
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
      
  if  (/*leftPinky < OFF && leftRing >= MID && */leftMiddle >= MID// && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky >=MID && rightRing>=MID && rightMiddle >= MID && rightIndex>= MID /*&& rightUnderIndex < OFF*/)
      return 51;
  else
      return 1;
}


int ePosition()
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
      
  if  (/*leftPinky < OFF && leftRing >= MID && */leftMiddle >= MID// && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle >= MID && rightIndex>= MID /*&& rightUnderIndex < OFF*/)  
      return 52;
  else
      return 1;
}


int fPosition()
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
      
  if  (/*leftPinky < OFF && leftRing >= MID && */leftMiddle >= MID// && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle < OFF && rightIndex>= MID /*&& rightUnderIndex < OFF*/)
      return 53;
  else
      return 1;
}


int fSharpPosition()
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
      
  if  (/*leftPinky < OFF && leftRing >= MID && */leftMiddle >= MID// && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing < OFF && rightMiddle >=MID && rightIndex < OFF /*&& rightUnderIndex < OFF*/)
      return 54;
  else
      return 1;
}




int gPosition()
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
 
  if (leftPinky < OFF && leftRing >= MID //&& leftMiddle >= MID && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
     return 55; 
  else
     return 1;
}

int gSharpPosition()
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
      
  if  (leftPinky >= MID && leftRing >= MID //&& leftMiddle >= MID && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 56;
  else
      return 1;
}



int aPosition()
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
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle >= MID && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF && rightUnderIndex < OFF)    
      return 57;
  else
      return 1;
}


int aSharpPosition()
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
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle >= MID && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF && rightUnderIndex >= MID)   
      return 58;
  else
      return 1;
}


int bPosition()
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
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < OFF && leftIndex >= MID && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 59;
  else
      return 1;
}


int cPosition()
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
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle >= MID && leftIndex< OFF && leftSideIndex < OFF
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 60;
  else
      return 1;
}


int cSharpPosition()
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
      
  if  (leftPinky < OFF && leftRing < OFF && leftMiddle < OFF && leftIndex< OFF && leftSideIndex >= MID
  && rightPinky < OFF && rightRing< OFF && rightMiddle< OFF && rightIndex< OFF /*&& rightUnderIndex < OFF*/)
      return 61;
  else
      return 1;
}


