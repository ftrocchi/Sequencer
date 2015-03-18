#ifndef __SCSERVO_H__
#define __SCSERVO_H__

#include "SequenceCommon.h"
#include "ServoCommandBase.h"

class SCServo : public ServoCommandBase {
private:
  ServoBoard::Value board;
  int boardI2CAddress;
  int servo;
  
public:
  SCServo(ServoCommand::Value commandToUse, ServoBoard::Value boardToUse, int servoToUse);
};

#endif
