# Hosting_a_Webpage_on_ESP8266_and_controlling_things
In this project, I've hosted a webpage on ESP8266 WiFi module and let the user control things using buttons present there

<p><b>Points To be remembered: </b></p> 

- We use HTTP (80)server for GET request
- We can create own wifi by using softAp function in WiFi module with desirable username and password
  `Note` -  There will be no internet connection available in this WiFi


HTML Code-

<p><!DOCTYPE HTML></p>
<p><html></p>
 <p> <h1>Hello Boss!</h1> </p>
 <p> <h2>Here are the controls</h2> </p>
 <p> <a href=\"/ledon\"\"><button>LED  ON</button></a> </p>
  <p><a href=\"/ledoff\"\"><button>LED  OFF</button></a><br/>  </p>  
<p></html></p>
