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






/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "jli115"
#define IO_KEY         "a29236a2d8e447119f3e2b3fa05b7e99"

/******************************* WIFI **************************************/

// the AdafruitIO_WiFi client will work with the following boards:
//   - HUZZAH ESP8266 Breakout -> https://www.adafruit.com/products/2471
//   - Feather HUZZAH ESP8266 -> https://www.adafruit.com/products/2821
//   - Feather HUZZAH ESP32 -> https://www.adafruit.com/product/3405
//   - Feather M0 WiFi -> https://www.adafruit.com/products/3010
//   - Feather WICED -> https://www.adafruit.com/products/3056

//#define WIFI_SSID       "BatCave"
//#define WIFI_PASS       "23333333"

// comment out the following two lines if you are using fona or ethernet
//#include "AdafruitIO_WiFi.h"

//AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);


/******************************* FONA **************************************/

// the AdafruitIO_FONA client will work with the following boards:
//   - Feather 32u4 FONA -> https://www.adafruit.com/product/3027

// uncomment the following two lines for 32u4 FONA,
// and comment out the AdafruitIO_WiFi client in the WIFI section
// #include "AdafruitIO_FONA.h"
// AdafruitIO_FONA io(IO_USERNAME, IO_KEY);


/**************************** ETHERNET ************************************/

// the AdafruitIO_Ethernet client will work with the following boards:
//   - Ethernet FeatherWing -> https://www.adafruit.com/products/3201

// uncomment the following two lines for ethernet,
// and comment out the AdafruitIO_WiFi client in the WIFI section
//#include "AdafruitIO_Ethernet.h"
//AdafruitIO_Ethernet io(IO_USERNAME, IO_KEY);s
