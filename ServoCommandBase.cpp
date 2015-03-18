#include "ServoCommandBase.h"

ServoCommandBase::ServoCommandBase(ServoCommand::Value commandToUse) {
  command = commandToUse;
  SerialPrint("ServoCommandBase|ServoCommandBase|command set to: ");
  SerialPrintln(command);
}

void ServoCommandBase::Run() {
  SerialPrintln("ServoCommandBase|Run|ERROR: This should not be seen");
}
