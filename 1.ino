// Adafruit IO Digital Output Example
// Tutorial Link: https://learn.adafruit.com/adafruit-io-basics-digital-output
//
// Adafruit invests time and resources providing this open source code.
// Please support Adafruit and open source hardware by purchasing
// products from Adafruit!
//
// Written by Todd Treece for Adafruit Industries
// Copyright (c) 2016 Adafruit Industries
// Licensed under the MIT license.
//
// All text above must be included in any redistribution.

/************************** Configuration ***********************************/

// edit the config.h tab and enter your Adafruit IO credentials
// and any additional configuration needed for WiFi, cellular,
// or ethernet clients.
#include "config.h"
#include <WiFi.h>
#include <WiFiUdp.h>
#include <WiFiClient.h>
#include <WiFiServer.h>

#include <AdafruitIO_MKR1000.h>
#include <AdafruitIO_WICED.h>
#include <AdafruitIO_WINC1500.h>
#include <AdafruitIO_ESP32.h>
#include <AdafruitIO_WiFi.h>
#include <AdafruitIO_ESP8266.h>
#include <AdafruitIO_WICED_SSL.h>



#include <AdafruitIO_MKR1000.h>
#include <AdafruitIO_WICED.h>
#include <AdafruitIO_WINC1500.h>
#include <AdafruitIO_ESP32.h>
#include <AdafruitIO_WiFi.h>
#include <AdafruitIO_ESP8266.h>
#include <AdafruitIO_WICED_SSL.h>


#include <interrupt.h>

#include <Adafruit_FONA.h>

#include <SoftwareSerial.h>

#include <w5500.h>

#include <Ethernet2.h>

#include <Adafruit_MQTT_Client.h>

#include <HttpClient.h>

#include <Adafruit_MQTT.h>

#include <AdafruitIO_MQTT.h>
#include <AdafruitIO_Ethernet.h>
#include <AdafruitIO_FONA.h>
#include <AdafruitIO_Definitions.h>
#include <AdafruitIO_Feed.h>
#include <AdafruitIO_Time.h>
#include <AdafruitIO_WiFi.h>
#include <AdafruitIO.h>
#include <AdafruitIO_Group.h>
#include <AdafruitIO_Data.h>
#include <AdafruitIO_Dashboard.h>
/************************ Example Starts Here *******************************/

// digital pin 5
#define LED_PIN 5

int feed;
int io;

// set up the 'digital' feed
AdafruitIO_Feed *digital = io.feed("digital");

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  
  // start the serial connection
  Serial.begin(115200);

  // wait for serial monitor to open
  while(! Serial);

  // connect to io.adafruit.com
  Serial.print("Connecting to Adafruit IO");
  int io;
io.connect();

  // set up a message handler for the 'digital' feed.
  // the handleMessage function (defined below)
  // will be called whenever a message is
  // received from adafruit io.
  int digital;
digital.prev->onMessage(handleMessage);

  // wait for a connection
int io;
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
    #define WIFI_SSID       "BatCave"
#define WIFI_PASS       "23333333"

// comment out the following two lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"
    AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

  }

  // we are connected
  Serial.println();
  Serial.println(io.statusText());
digital.prev->get();

}

void loop() {

  // io.run(); is required for all sketches.
  // it should always be present at the top of your loop
  // function. it keeps the client connected to
  // io.adafruit.com, and processes any incoming data.
  int io;
  io.run();

}

// this function is called whenever an 'digital' feed message
// is received from Adafruit IO. it was attached to
// the 'digital' feed in the setup() function above.
void handleMessage(AdafruitIO_Data *data) {

  Serial.print("received <- ");

  if(data->toPinLevel() == HIGH)
    Serial.println("HIGH");
  else
    Serial.println("LOW");


  digitalWrite(LED_PIN, data->toPinLevel());
}
