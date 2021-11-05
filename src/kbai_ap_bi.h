#include <Arduino.h>
#include <Wire.h>
void save_value_1(uint8_t value = 0 ) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(26);
  Wire1.write(value);
  Wire1.endTransmission();
  delay(10);
}
void save_value_2(uint8_t value = 0 ) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(27);
  Wire1.write(value);
  Wire1.endTransmission();
  delay(10);

}

int8_t setmode(int8_t modes) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(1);
  Wire1.write(modes);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
int8_t ___status() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(0);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
int16_t W() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(2);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x3E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t H() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(4);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x3E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t Class() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(6);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x3E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
uint8_t objectdetection(uint8_t* rawdata) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(10);
  Wire1.requestFrom(0x3E, 60);
  
  uint8_t coundata = 0;
  while (Wire1.available()!=60) {
    delay(1);
  }
    for (int i = 0; i < 60; i++) {
      rawdata[i] = Wire1.read();
      if((i+1)%6 == 0 && rawdata[i] != 255){
        coundata++;
      }
    }
  
  delay(1);
  Wire1.beginTransmission(0x3E);
  Wire1.write(13);
  Wire1.write(0);
  Wire1.endTransmission();
  return coundata;
}
uint8_t classification(uint8_t* rawdata) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(10);
  Wire1.requestFrom(0x3E, 30);
  uint8_t coundata = 0;
  while (Wire1.available()) {
    for (int i = 0; i < 30; i++) {
      rawdata[i] = Wire1.read();
      if((i+1)%3 == 0 && rawdata[i] != 255){
        coundata++;
      }
    }
  }
  return coundata;
}
void regression(uint8_t* rawdata) {
  Wire1.beginTransmission(0x3E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(10);
  Wire1.requestFrom(0x3E, 10);
  while (Wire1.available()) {
    for (int i = 0; i < 10; i++) {
      rawdata[i] = Wire1.read();
    }
  }
}
uint8_t threshold(int8_t threshold) {
  if (threshold > 99 )
    threshold = 99;
  Wire1.beginTransmission(0x3E);
  Wire1.write(10);
  Wire1.write(threshold);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t fps() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(11);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);
  while (Wire1.available()) {
    raw = Wire1.read();
  }
  return raw;
}
void save_img() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(12);
  Wire1.write(1);
  Wire1.endTransmission();
  delay(10);
}
uint8_t new_data_available() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(13);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);
  while (Wire1.available()) {
    raw = Wire1.read();
  }
  return raw;
}

uint16_t num_img() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(15);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x3E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t num_mic() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(17);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x3E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
void save_mic() {
  Wire1.beginTransmission(0x3E);
  Wire1.write(19);
  Wire1.write(1);
  Wire1.endTransmission();
  delay(10);

}
void face_recognition_save(uint8_t id = 0) {
  if (id < 0 )
    id = id;
  if (id > 255 )
    id = 255;
  Wire1.beginTransmission(0x3E);
  Wire1.write(20);
  Wire1.write(id);
  Wire1.endTransmission();
  delay(10);
}
void face_recognition_del(uint8_t id = 0) {
  if (id < 0 )
    id = id;
  if (id > 255 )
    id = 255;
  Wire1.beginTransmission(0x3E);
  Wire1.write(21);
  Wire1.write(id);
  Wire1.endTransmission();
  delay(10);

}
uint8_t face_recognition_threshold(int8_t threshold) {
  if (threshold > 99 )
    threshold = 99;
  Wire1.beginTransmission(0x3E);
  Wire1.write(22);
  Wire1.write(threshold);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t vflip(uint8_t st) {

  Wire1.beginTransmission(0x3E);
  Wire1.write(23);
  Wire1.write(st);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t hmirror(uint8_t st) {

  Wire1.beginTransmission(0x3E);
  Wire1.write(24);
  Wire1.write(st);
  Wire1.endTransmission();
  delay(10);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x3E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}

