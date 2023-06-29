// DragonOS_SphericalTimer_v.17.0.23621.1002
// This is an unstable version to test

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include <U8g2_for_Adafruit_GFX.h>

/* Reset TFT display */

Adafruit_ST7735 tft = Adafruit_ST7735(9, 10, -1);
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;


/* Create an array to represent the functions that will be used */

String Mode[]={((String)("STOP WATCH")), ((String)("COUNT DOWN")), ((String)("COMPREHENSIVE")), ((String)("TODO")), ((String)("COUNTDOWN DAY"))};

void setup() {

  // put your setup code here, to run once:

  /* Initialize TFT display */

  tft.initR(INITR_18GREENTAB);
  tft.fillScreen(ST7735_BLACK);
  u8g2_for_adafruit_gfx.begin(tft);
  tft.fillScreen((0));

  /* Initialize Fonts */

  u8g2_for_adafruit_gfx.setFont(u8g2_font_timB18_tf);
  u8g2_for_adafruit_gfx.setFont(u8g2_font_wqy12_t_gb2312);
}

void loop() {

  // put your main code here, to run repeatedly:

  /* Power on and boot the device -------------------- */
  /* Exactly, there is a vitural boot code ----------- */

  u8g2_for_adafruit_gfx.setCursor(0,20);
  u8g2_for_adafruit_gfx.setForegroundColor((65535));
  u8g2_for_adafruit_gfx.print("DragonTimer");					// Display the boot logo

  delay(3000);

  tft.fillScreen((0));											// Clear the display

  delay(1000);

  u8g2_for_adafruit_gfx.setFont(u8g2_font_timR14_tf);
  u8g2_for_adafruit_gfx.setCursor(0,20);
  u8g2_for_adafruit_gfx.setForegroundColor((65535));
  u8g2_for_adafruit_gfx.print("DragonOS SphericalTimer");		// Display the OS name
  
  u8g2_for_adafruit_gfx.setFont(u8g2_font_timR10_tf);
  u8g2_for_adafruit_gfx.setCursor(0,40);
  u8g2_for_adafruit_gfx.setForegroundColor((65535));
  u8g2_for_adafruit_gfx.print("v.17.0.23621.1002");				// Display the OS info
  
  delay(5000);

  tft.fillScreen((0));											//Clear the display

  /* End the boot progress and start the main code --- */

}
