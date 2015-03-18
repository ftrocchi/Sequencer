// sequencer
#include "SCClose.h"
#include "SCOpen.h"
#include "SCMoveToPercent.h"
#include "SCDelay.h"

void setup() {
#ifdef USE_SERIAL
  Serial.begin(115200);
#endif

  SCClose closeServo = SCClose(ServoBoard::PrimaryDome, 0);
  closeServo.Run();
  
  SCOpen openServo = SCOpen(ServoBoard::PrimaryBody, 5);
  openServo.Run();
  
  SCMoveToPercent moveServo = SCMoveToPercent(ServoBoard::PrimaryBody, 5, .5);
  moveServo.Run();
  
  SCDelay delayServo = SCDelay(1000);
  delayServo.Run();

}

void loop() {

}
