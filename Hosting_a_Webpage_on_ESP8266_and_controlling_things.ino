#include<ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);  //as we use HTTP server for GET request, it uses port 80, so here, it is declared 80

void setup() {
  Serial.begin(9600);
  WiFi.begin("Vishnu","123456789")

  // here "Vishnu" is username of our hotspot and "123456789" is the password
  //we can create own wifi by using softAp function in WiFi module with desirable username and password
  //Note that there will be no internet connection in this WiFi

  if(WiFi.status() == WL_CONNECTED){
    Serial.println("WiFI Connected");
  }

  Serial.println(WiFi.localIP()); //print IP of the server
  server.begin(); //starting HTTP server on ESP8266 module
  pinMode(D5,OUTPUT); //attaching our led to pin D5 in ESP8266

}

void loop() {
  client = server.available();  //Gets a client that is connected to the server and has data available for reading.    
  if (client == 1)
  {  
    String request =  client.readStringUntil('\n'); //read data until new line is occurred
    Serial.println(request);
    request.trim(); //deleting disturbances is any
    if(request == "GET /ledon HTTP/1.1")
    {
      digitalWrite(D5, HIGH);
    }
    if(request == "GET /ledoff HTTP/1.1")
    {
      digitalWrite(D5, LOW);
    }
    
  }
  client.println("Content-Type: text/html");  //any html code of the web page starts with these 3 lines 
  client.println("");
  client.println("<!DOCTYPE HTML>");

  
  client.println("<html>");
  client.println("<h1>Hello Boss!</h1>");
  client.println("<h2>Here are the controls</h2><br>");
  client.println("<a href=\"/ledon\"\"><button>LED  ON</button></a>");
  client.println("<a href=\"/ledoff\"\"><button>LED  OFF</button></a><br/>");  //here there are only 2 buttons for ON/OFF of the led
  client.println("</html>");      //It's our wish to add our own actuators here

}
