#ifndef __SERVOCOMMANDBASE_H__
#define __SERVOCOMMANDBASE_H__

#include "SequenceCommon.h"

class ServoCommandBase {
private:
  ServoBoard::Value board;
  int boardI2CAddress;
  
public:
  ServoCommandBase(ServoBoard::Value boardToUse);
};

#endif
