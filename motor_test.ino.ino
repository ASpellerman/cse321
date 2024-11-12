//#include <Wire.h>
#include <Servo.h>
//#include "Adafruit_OV7670-master/src/image_ops.h"  
//#include "Adafruit_OV7670-master/src/Adafruit_OV7670.h"  
//#include "Adafruit_OV7670-master/src/ov7670.h"  
//#include "Adafruit_ILI9341.h"
int motorControl = 8;
Servo motor;
//int leftRotation = 0;
//int rightRotation = 0;

void setup() {
  //motor things
  Serial.begin(9600);
  motor.attach(motorControl);
  pinMode(motorControl, OUTPUT);
  pinMode(13, OUTPUT);

  //camera things
  //pins that change value for this to work: D12, D3, D2, A4, A5
  //D12 is PCLK
  //D3 is XCLK
  //D2 is VSYNC
  //A4 is SIOD and through 20K SIOC????
  //A5 is SIOC and through 20k SIOD
  //input pins: A0, A1, A2, A3, D4, D5, D6, D7

}

void loop() {
  //motor.write(180);
  //delay(2000);
  //motor.write(90);
  //delay(2000);
}
void processImage(){
  
}














//struct pixel{
//  u_int red;
//  u_int green;
//  u_int blue;   Adafruit_ZeroDMA.h = Adafruit_ZeroDMA.h
//};
//pixel[][] image;

/*void rotateFan(bool isRight){
  if(isRight){
    analogWrite(motorControl, rightRotation);
    delay(1000);
  }else{
    analogWrite(motorControl, leftRotation);
    delay(1000);
  }
}
void reduceImage(int startX, int startY, int endX, int endY){
  //how many chunks
  int chunkX = startX / endX;
  int chunkY = startY / endY;
  //size of each chunk
  int deltaX = startX / chunkX;
  int deltaY = startY / chunkY;
  int currentXChunk = 0;
  int currentYChunk = 0;
  pixel[][] newImage;
  for(int currentXChunk = 0; currentXChunk < chunkX; currnetXChunk++){
    u_long redSum = 0;
    u_long greenSum = 0;
    u_long blueSum = 0;
    for(int currentXChunk = 0; currentXChunk < chunkX; currnetXChunk++){
      for(int x = 0; x < chunkX x++){
        for(int y = 0; y < chunkY; y++){
          blueSum += image[x + (currentXChunk * deltaX)][y + (currentYChunk * deltaY].blue;
          greenSum += image[x + (currentXChunk * deltaX)][y + (currentYChunk * deltaY].green;
          redSum += image[x + (currentXChunk * deltaX)][y + (currentYChunk * deltaY].red;
        }
      }
      redSum = redSum / (((u_long)deltaX) * deltaY);
      greenSum = greenSum / (((u_long)deltaX) * deltaY);
      blueSum = blueSum / ((((u_long)deltaX) * deltaY);
      newImage[][] = new pixel(redSum, greenSum, blueSum);
    }
  }
  image = newImage;
}*/






















