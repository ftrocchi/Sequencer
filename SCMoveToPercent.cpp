#include "SCMoveToPercent.h"

SCMoveToPercent::SCMoveToPercent(ServoBoard::Value boardToUse, int servoToUse, float percentToUse) : SCServo(ServoCommand::MoveToPercent, boardToUse, servoToUse) {
  percent = percentToUse;
  SerialPrint("SCMoveToPercent|SCMoveToPercent|percent set to: ");
  SerialPrintln(percent);  
}

void SCMoveToPercent::Run() {
  SerialPrintln("SCMoveToPercent|Run|Run called!");
}
