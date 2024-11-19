#include <WiFi.h>      

// WiFi credentials
const char* ssid = "SSID";
const char* password = "password";

void setup_wifi() {
  delay(1000);  // Added longer delay for serial stability
  Serial.println();
  Serial.println("-------------------");  // Clear separator
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);  // Added explicit WiFi mode
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("-------------------");
}

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // Wait for serial port to connect
  }
  
  delay(1000);  // Give time for serial to stabilize
  Serial.println("\n\nESP32 Starting up...");
  
  setup_wifi();
}

void loop() {
  // Your loop code here
}