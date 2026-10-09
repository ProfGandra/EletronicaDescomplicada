#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Arduino Uno, LM35, sensor capacitivo analógico, LDR em divisor.
// Relés de 5 V DEVEM ser módulos com driver e proteção.
// Somente cargas DC de baixa tensão. Ajustar valores após calibração.
LiquidCrystal_I2C lcd(0x27, 16, 2);
const byte UMID=A0, TEMP=A1, LUZ=A2, BOMBA=9, LAMP=10;
const byte VERM=3, VERDE=5, AZUL=6, BUZZ=8;
const int ADC_SECO=800, ADC_UMIDO=350; // EXEMPLOS, medir na bancada
const int U_LIGA=30, U_DESLIGA=45, L_LIGA=400, L_DESLIGA=500;
const float T_ALERTA=35.0;
const bool RELE_ATIVO_BAIXO=true;
const unsigned long MAX_BOMBA=5000UL, PAUSA_REGA=60000UL, PERIODO=1000UL;
bool irrigando=false, iluminando=false;
unsigned long inicioBomba=0, ultimaRega=0, ultimaLeitura=0;
void rele(byte p, bool ligado) {
  digitalWrite(p, (ligado != RELE_ATIVO_BAIXO) ? HIGH : LOW);
}
int umidadeRelativa() {
  if (ADC_SECO==ADC_UMIDO) return -1;
  long v=(long)(analogRead(UMID)-ADC_SECO)*100L/(ADC_UMIDO-ADC_SECO);
  return (int)constrain(v,0,100);
}
float temperaturaC() {
  return analogRead(TEMP)*(5.0/1023.0)*100.0; // Somente LM35, Vref=5V
}
void setup() {
  Serial.begin(9600);
  rele(BOMBA,false); rele(LAMP,false); // Estado desligado antes de OUTPUT
  pinMode(BOMBA,OUTPUT); pinMode(LAMP,OUTPUT);
  pinMode(VERM,OUTPUT); pinMode(VERDE,OUTPUT); pinMode(AZUL,OUTPUT);
  pinMode(BUZZ,OUTPUT);
  lcd.init(); lcd.backlight(); lcd.print("Sistema iniciado");
  ultimaRega=millis()-PAUSA_REGA;
}
void loop() {
  unsigned long agora=millis();
  if (agora-ultimaLeitura<PERIODO) return;
  ultimaLeitura=agora;
  int u=umidadeRelativa(), l=analogRead(LUZ);
  float t=temperaturaC();
  if (u<0) irrigando=false;
  if (irrigando && (u>=U_DESLIGA || agora-inicioBomba>=MAX_BOMBA)) {
    irrigando=false; ultimaRega=agora;
  }
  if (!irrigando && u>=0 && u<U_LIGA && agora-ultimaRega>=PAUSA_REGA) {
    irrigando=true; inicioBomba=agora;
  }
  rele(BOMBA,irrigando);
  if (!iluminando && l<L_LIGA) iluminando=true;
  else if (iluminando && l>L_DESLIGA) iluminando=false;
  rele(LAMP,iluminando);
  bool alerta=(u<0 || u<20 || t>T_ALERTA);
  digitalWrite(VERM,alerta?HIGH:LOW);
  digitalWrite(VERDE,alerta?LOW:HIGH);
  digitalWrite(AZUL,t>T_ALERTA?HIGH:LOW);
  if (alerta) tone(BUZZ,1000,100); else noTone(BUZZ);
  lcd.setCursor(0,0);
  lcd.print("U:");
  if (u>=0) { lcd.print(u); lcd.print("% "); } else lcd.print("ERRO ");
  lcd.print("T:"); lcd.print((int)t); lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.print("Luz:"); lcd.print(l); lcd.print("      ");
  Serial.print("U="); Serial.print(u);
  Serial.print(" T="); Serial.print(t);
  Serial.print(" L="); Serial.println(l);
}
