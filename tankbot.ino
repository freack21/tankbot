#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL6B9uArUJ1"
#define BLYNK_TEMPLATE_NAME "TankBot"
#define BLYNK_AUTH_TOKEN "UgLHTNi4IO3M39WfG9ROEugS7wMG7wDD"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servoPutar, servoKanan, servoKiri, servoCapit;
int posServoPutar = 0, posServoKanan = 0, posServoKiri = 0, posServoCapit = 0;

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

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(BAN_KIRI1, OUTPUT);
  pinMode(BAN_KIRI2, OUTPUT);
  pinMode(BAN_KANAN1, OUTPUT);
  pinMode(BAN_KANAN2, OUTPUT);

  servoPutar.attach(5);
  servoKanan.attach(6);
  servoKiri.attach(7);
  servoCapit.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
