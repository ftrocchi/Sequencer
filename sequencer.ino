// sequencer
#include "ServoCommandBase.h"

void setup() {
#ifdef USE_SERIAL
  Serial.begin(115200);
#endif

  ServoCommandBase servo = ServoCommandBase(ServoBoard::PrimaryDome);
}

void loop() {
  // put your main code here, to run repeatedly:

}
