#include <MUX_74HC4067.h>

Mux Mux(13, 12, 11, 10);

void setup() {
    Serial.begin(115200);
    Mux.begin();
}

void loop() {
    for (int channel = 0; channel < 16; channel++) {
        Mux.selectChannel(channel);

        Serial.print("Channel ");
        Serial.println(channel);

        delay(2000);
    }
}
