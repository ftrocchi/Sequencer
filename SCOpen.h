#ifndef __SCOPEN_H__
#define __SCOPEN_H__

#include "SequenceCommon.h"
#include "SCServo.h"

class SCOpen : public SCServo {
public:
  SCOpen(ServoBoard::Value boardToUse, int servoToUse);
  
  virtual void Run();
};

#endif
