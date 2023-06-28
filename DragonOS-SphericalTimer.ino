// DragonOS_SphericalTimer_v.17.0.23621.1001
// This is an unstable version to test.

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include <U8g2_for_Adafruit_GFX.h>

Adafruit_ST7735 tft = Adafruit_ST7735(9, 10, -1);
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;
String Mode[]={((String)("STOP WATCH")), ((String)("COUNT DOWN")), ((String)("MIX")), ((String)("TODO")), ((String)("COUNTDOWN DAY"))};

void setup() {
  // put your setup code here, to run once:

  tft.initR(INITR_18GREENTAB);
  tft.fillScreen(ST7735_BLACK);
  u8g2_for_adafruit_gfx.begin(tft);
  tft.fillScreen((0));
  u8g2_for_adafruit_gfx.setFont(u8g2_font_timB18_tf);
  u8g2_for_adafruit_gfx.setFont(u8g2_font_wqy12_t_gb2312);
}

void loop() {
  // put your main code here, to run repeatedly:

  u8g2_for_adafruit_gfx.setCursor(0,20);
  u8g2_for_adafruit_gfx.setForegroundColor((65126));
  u8g2_for_adafruit_gfx.print("DragonTimer");
  delay(3000);
  u8g2_for_adafruit_gfx.setCursor(0,20);
  u8g2_for_adafruit_gfx.setForegroundColor((65126));
  u8g2_for_adafruit_gfx.print("DragonOS SphericalTimer");
  u8g2_for_adafruit_gfx.setCursor(0,40);
  u8g2_for_adafruit_gfx.setForegroundColor((65126));
  u8g2_for_adafruit_gfx.print("v.17.0.23621.1000");
}
