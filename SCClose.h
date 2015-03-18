#ifndef __SCCLOSE_H__
#define __SCCLOSE_H__

#include "SequenceCommon.h"
#include "SCServo.h"

class SCClose : public SCServo {
public:
  SCClose(ServoBoard::Value boardToUse, int servoToUse);
  
  virtual void Run();
};

#endif
