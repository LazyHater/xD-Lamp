
// Deviceinfo.h

#ifndef DEVICEINFO_H
#define DEVICEINFO_H

const uint8_t DEVICEINFO_PAYLOAD[] PROGMEM = "{\"deviceInfo\":{\"name\":\"xdlamp\",\"endPoints\":{\"set\":{\"values\":{\"value\":0},\"min\":0,\"max\":3,\"units\":\"level\",\"card-type\":\"crouton-simple-slider\",\"title\":\"xD-Lamp\"},\"toggle\":{\"values\":{\"value\":true},\"icons\":{\"icon\":\"bolt\"},\"card-type\":\"crouton-simple-button\",\"title\":\"xD-Lamp Toggle\"}},\"description\":\"Lets make lamp great again.\",\"status\":\"good\"}}";
const int DEVICEINFO_PAYLOAD_SIZE = 341;

#endif
