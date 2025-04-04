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


// #define S0 13
// #define S1 12
// #define S2 11
// #define S3 10

// void setup() 
// {
//     Serial.begin(115200);

//     pinMode(S0, OUTPUT);
//     pinMode(S1, OUTPUT);
//     pinMode(S2, OUTPUT);
//     pinMode(S3, OUTPUT);
// }

// void loop() 
// {
//     for (int channel = 0; channel < 16; channel++) 
//     {
//         selectChannel(channel);

//         Serial.print("Channel ");
//         Serial.print(channel);

//         delay(2000); 
//     }
// }

// void selectChannel(int channel) 
// {
//     digitalWrite(S0, channel & 0x01);
//     digitalWrite(S1, (channel >> 1) & 0x01);
//     digitalWrite(S2, (channel >> 2) & 0x01);
//     digitalWrite(S3, (channel >> 3) & 0x01);
// }
