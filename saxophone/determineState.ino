int state()     // returns which note is being played, or 1 if no note is being played
{
  
  if (dPosition() != 1)
    return 50;
  else if (dSharpPosition() != 1)
    return 51;
  else if (ePosition() != 1)
    return 52;
  else if (fPosition() != 1)
    return 53;
  else if (fSharpPosition() != 1)
    return 54;
  else if (gPosition() != 1)
    return 55;
  else if (gSharpPosition() != 1)
    return 56;  
  else if (aPosition() != 1)
    return 57;
  else if (aSharpPosition() != 1)
    return 58;  
  else if (bPosition() != 1)
    return 59;
  else if (cPosition() != 1)
    return 60;
  else if (cSharpPosition() != 1)
    return 61;
  else if (highDPosition() != 1)
    return 62;
  else if (highDSharpPosition() != 1)
    return 63;
  else if (highEPosition() != 1)
    return 64;
  else if (highFPosition() != 1)
    return 65;
  else if (highFSharpPosition() != 1)
    return 66;
  else if (highGPosition() != 1)
    return 67;
  else if (highGSharpPosition() != 1)
    return 68;  
  else if (highAPosition() != 1)
    return 69;
  else if (highASharpPosition() != 1)
    return 70;  
  else if (highBPosition() != 1)
    return 71;
  else if (highCPosition() != 1)
    return 72;
  else if (highCSharpPosition() != 1)
    return 73;
  else
    return 1;
    
}

