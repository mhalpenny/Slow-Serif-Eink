//~~~ INCLUDE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <GxEPD2_PP.h>
#include <Adafruit_GFX_RK.h>
#define ENABLE_GxEPD2_GFX 0
#include <Arduino.h>
#include <FreeMonoBold9pt7b.h>
#include <GxEPD2_BW.h>

//~~~ EINK ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include "Particle.h"
#define MAX_DISPAY_BUFFER_SIZE 15000ul // ~15k is a good compromise
#define MAX_HEIGHT(EPD) (EPD::HEIGHT <= MAX_DISPAY_BUFFER_SIZE / (EPD::WIDTH / 8) ? EPD::HEIGHT : MAX_DISPAY_BUFFER_SIZE / (EPD::WIDTH / 8))
#define MAX_HEIGHT_3C(EPD) (EPD::HEIGHT <= (MAX_DISPAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8) ? EPD::HEIGHT : (MAX_DISPAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8)) GxEPD2_3C<GxEPD2_213c, MAX_HEIGHT_3C(GxEPD2_213c)> display(GxEPD2_213c(/*CS=*/ A2, /*DC=*/ D2, /*RST=*/ D1, /*BUSY=*/ D0));

//~~~ GLOBAL VAR ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
unsigned long firstAvailable = 0;
int counter;
//String novella = "";
unsigned short int wakeUpSwitch = D0; 
//int DUTY_CYCLE = 60; // specify duty cycle in seconds 
unsigned long DAY_CYCLE = 86400;
int DEBUG_CYCLE = 10;
int sleepMode = 0;
int swState = 0;
int val = 0;

//~~~ STARTUP ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
STARTUP(startupFunctions());

void startupFunctions() {   
    // RGB.control(true);
    //RGB.brightness(0);
   System.enableFeature(FEATURE_RETAINED_MEMORY);
    //SYSTEM_MODE(MANUAL);
}

//~~~ SETUP ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setup() {

    Particle.publish("Sleep", "State", 0, PUBLIC);
    //Particle.publish("Switch", "Value", 0, PUBLIC);
    pinMode(wakeUpSwitch, INPUT_PULLDOWN);
}

//~~~ LOOP ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void loop() {
    
    //--- START NOT IN USE -----------
   
    //receive new word
    //String word = '';
    
    //add word to string
    //sprintf(novella, "%d; %d", oldNovella, word);
    
    //refresh e-ink via SPI
    
    //--- END NOT IN USE -----------
            
        //RESET SLEEP VARIABLE
        sleepMode = 0;
        Particle.publish("Sleep", sleepMode ? "ON" : "OFF");
        delay(3000);
    
        //START SLEEP VARIABLE
        sleepMode = !sleepMode;
        Particle.publish("Sleep", sleepMode ? "ON" : "OFF");
        delay(3000);
        
        //SLEEP STOP
        System.sleep(wakeUpSwitch, FALLING);
        
        //POST-SLEEP

}