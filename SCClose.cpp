#include "SCCLose.h"

SCClose::SCClose(ServoBoard::Value boardToUse, int servoToUse) : SCServo(ServoCommand::Close, boardToUse, servoToUse) {
}

void SCClose::Run() {
  SerialPrintln("SCClose|Run|Run called!");
}

