#include "ServoCommandBase.h"

ServoCommandBase::ServoCommandBase() {
  command = ServoCommand::Close;
}

ServoCommandBase::ServoCommandBase(ServoCommand::Value commandToUse) {
  command = commandToUse;
  SerialPrint("ServoCommandBase|ServoCommandBase|command set to: ");
  SerialPrintln(command);
}

void ServoCommandBase::Run() {
  SerialPrint("ServoCommandBase|Run|command=");
  SerialPrintln(command);
  SerialPrintln("ServoCommandBase|Run|ERROR: This should not be seen");
}

ServoCommand::Value ServoCommandBase::GetCommand() {
  return command;
}
