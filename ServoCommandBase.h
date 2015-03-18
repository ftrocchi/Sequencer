#ifndef __SERVOCOMMANDBASE_H__
#define __SERVOCOMMANDBASE_H__

#include "SequenceCommon.h"

class ServoCommandBase {
private:
  ServoCommand::Value command;
  
public:
  ServoCommandBase(ServoCommand::Value commandToUse);
  
  virtual void Run();
};

#endif
