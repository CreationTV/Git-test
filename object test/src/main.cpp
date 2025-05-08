#include <Arduino.h>

//创建一个LED对象并实现闪烁

class Led{    //创建类“Led”
  public:   //创建公共成员函数
  Led();    //创建构造函数
  Led(int userLedPin);    //创建构造函数
  ~Led();   //创建析构函数
  void on();    //创建成员函数
  void off();   //创建成员函数
  int ledPin = 2;   //将未输入参数的Led对象的引脚默认设置为2
};

Led::Led(){
  Serial.println("Led Object Created!");
  pinMode(ledPin, OUTPUT);
}

Led::Led(int userLedPin){
  Serial.println("Led Object Created!");
  userLedPin = ledPin;    //将使用者创建的Led对象中的参数赋值给ledPin
  pinMode(ledPin, OUTPUT);
}

Led::~Led(){
  Serial.println("Led Object Deleted!");
}

void Led::on(){
  digitalWrite(ledPin, HIGH);
}

void Led::off(){
  digitalWrite(ledPin, LOW);
}

void setup(){
  Serial.begin(9600);
  Led CTVled1;
  Led CTVled2(7);

  for(int i = 0; i < 5; i ++){
    CTVled1.on();
    delay(5000);
    CTVled2.on();
    delay(5000);
  }
}

void loop(){

}