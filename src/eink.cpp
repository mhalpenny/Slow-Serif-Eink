/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#line 1 "/Users/home/Developer/Particle/eink/src/eink.ino"
// This #include statement was automatically added by the Particle IDE.
#include <GxEPD2_PP.h>
//#include <Adafruit_GFX_RK.h>
//#define ENABLE_GxEPD2_GFX 0
#include <Arduino.h>
#include <Adafruit_GFX.h>
//#include <FreeMonoBold9pt7b.h>
//#include <GxEPD2_BW.h>
//#include <GxEPD2_3C.h>

//#if defined(PARTICLE)
//GxEPD2_3C<GxEPD2_750c, GxEPD2_750c::HEIGHT / 4 > display(GxEPD2_750c(/*CS=D5*/ SS, /*DC=*/ A1, /*RST=*/ A0, /*BUSY=*/ D4));
//#endif

//#include "images.h"

//e-ink 
//#include "Particle.h"
//#define PORT    9009
//#define TCP_COMMUNICATION

//TCPClient client;
//byte server[] = { 192, 168, 31, 27 }; // to the queen(one as a server photon)  wlan IP
//UDP udp;
//IPAddress broadcast(192,168,31,255);

//unsigned long firstAvailable = 0;
void startupFunctions();
void setup();
void loop();
#line 28 "/Users/home/Developer/Particle/eink/src/eink.ino"
int counter;
//String novella = "";
int wakeupPin = D0; 
//int DUTY_CYCLE = 60; // specify duty cycle in seconds 
int DAY_CYCLE = 86400;
int DAY_CYCLE_DEBUG = 10;

STARTUP(startupFunctions());

void startupFunctions() {   
    //RGB.control(true);
    //RGB.brightness(0);
    //System.enableFeature(FEATURE_RETAINED_MEMORY);
    //SYSTEM_MODE(MANUAL);
}

//SystemSleepConfiguration config;

void setup() {
    

}

void loop() {
    
     // bool wifiReady = WiFi.ready();
    //WiFi.useStaticIP(); //cuts down on data
    
    //tell the server to generate word     
    //udp.begin(11200);
    //udp.beginPacket(broadcast, PORT);
    //udp.write(5);
    //udp.endPacket();
    
    //receive new word
    //String word = " ";
    
    //add word to string
    //sprintf(novella, "%d; %d", oldNovella, word);
    
    //refresh e-ink via SPI
    
    
    //sleep
    //if (millis() - firstAvailable > 30000) {
        
            
			// After we've been up for 30 seconds, go to sleep. The delay is so the serial output gets written out before
			// sleeping.
			Serial.println("calling System.sleep(SLEEP_MODE_DEEP, VALUE)");
			delay(2);

 			System.sleep(SLEEP_MODE_DEEP, DAY_CYCLE_DEBUG);
			
			//STOP SLEEP System.sleep(pin, edge, timeout)
            //System.sleep(uint16_t wakeupPin, uint16_t RISING, DAY_CYCLE);



			// The rest of the code here is not reached. SLEEP_MODE_DEEP causes the code execution to stop,
			// and when wake up occurs, it's like a reset where you start again with setup(), all variables are
			// cleared, etc.
			Serial.println("returned from sleep, should not occur");
		//}
    
}