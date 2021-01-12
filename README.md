# Hosting_a_Webpage_on_ESP8266_and_controlling_things
In this project, I've hosted a webpage on ESP8266 WiFi module and let the user control things using buttons present there


<p><b> Components Required : </b></p>
-ESP8266
-Laptop (Ofcourse)

<p><b><i>Points To be remembered: </i></b></p> 

- We use HTTP (80)server for GET request
- We can create own wifi by using softAp function in WiFi module with desirable username and password
<br>
  `Note` -  There will be no internet connection available in this WiFi
  
<b>HTML Code Output</b>

<!DOCTYPE HTML>
<html>
 <h1>Hello Boss!</h1>
 <h2>Here are the controls</h2>
  <a href=\"/ledon\"\"><button>LED  ON</button></a> 
  <a href=\"/ledoff\"\"><button>LED  OFF</button></a>  
</html>
