#define BLYNK_PRINTln Serial
#define BLYNK_TEMPLATE_ID "TMPL6B9uArUJ1"
#define BLYNK_TEMPLATE_NAME "TankBot"
#define BLYNK_AUTH_TOKEN "UgLHTNi4IO3M39WfG9ROEugS7wMG7wDD"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servoPutar, servoLengan, servoBahu, servoCapit;
int sudutServoPutar = 0, sudutServoLengan = 0, sudutServoBahu = 0, sudutServoCapit = 0;

char ssid[] = "SSO_UNRI";
char pass[] = "";

int BAN_KANAN1 = D1;
int BAN_KANAN2 = D2;
int BAN_KIRI1 = D3;
int BAN_KIRI2 = D4;

BLYNK_WRITE(V0)
{
  if(param.asInt() == 1) {
    maju();
  } else {
    stop();
  }
}

BLYNK_WRITE(V1)
{
  if(param.asInt() == 1) {
    mundur();
  } else {
    stop();
  }
}

BLYNK_WRITE(V2)
{
  if(param.asInt() == 1) {
    kiri();
  } else {
    stop();
  }
}

BLYNK_WRITE(V3)
{
  if(param.asInt() == 1) {
    kanan();
  } else {
    stop();
  }
}

BLYNK_WRITE(V4)
{
  if(param.asInt() == 1) {
    putar_kiri();
  } else {
    stop();
  }
}

BLYNK_WRITE(V5)
{
  if(param.asInt() == 1) {
    putar_kanan();
  } else {
    stop();
  }
}

// joystick sebelah kiri
BLYNK_WRITE(V6)
{
  // untuk swing bawah
  int servoPutarX = param.asInt(); 
  // Serial.println(servoPutarX);
  int servoPosition = map(servoPutarX, 0, 1023, 0, 180); 
  // Serial.println(servoPosition);
  servoPutar.write(servoPosition); 
  // servoPutar.write(servoPutarX); 
}

BLYNK_WRITE(V7)
{
  // untuk stick
  // int servoLenganY = analogRead(V7); 
  int servoLenganY = param.asInt(); 
  int servoPosition = map(servoLenganY, 0, 1023, 0, 180); 
  servoLengan.write(servoPosition);
  // servoLengan.write(servoLenganY);
}

// joystick sebelah kanan
BLYNK_WRITE(V8)
{
  // untuk penjepit
  int servoCapitX = param.asInt(); 
  int servoPosition = map(servoCapitX, 0, 1023, 0, 180); 
  servoCapit.write(servoPosition); 
}

BLYNK_WRITE(V9)
{
  // untuk boom
  int servoBahuY = param.asInt(); 
  // Serial.println(servoBahuY);
  int servoPosition = map(servoBahuY, 0, 1023, 0, 180); 
  // Serial.println(servoPosition);
  servoBahu.write(servoPosition);
}

void setup() {
  
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(BAN_KIRI1, OUTPUT);
  pinMode(BAN_KIRI2, OUTPUT);
  pinMode(BAN_KANAN1, OUTPUT);
  pinMode(BAN_KANAN2, OUTPUT);

  servoPutar.attach(14);
  servoLengan.attach(12);
  servoBahu.attach(13);
  servoCapit.attach(15);

  servoPutar.write(90);
  servoLengan.write(0);
  servoBahu.write(0);
  servoCapit.write(0);
}

void loop() {
  
  Blynk.run();
}
