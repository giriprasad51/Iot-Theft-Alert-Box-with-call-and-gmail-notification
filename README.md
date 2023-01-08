# Iot-Theft-Alert-Box-with-call-and-gmail-notification

##Step 1:

Connect the WI-FI module to the Ultra-sonic sensor and integrate them with the breadboard with the Led-light and buzzer connected to it.
By using C++ Ultra-sonic sensor is setup and indentify a object from 0 to less than box height and greater than box height to 30 cm

<a href="url"><img src="https://github.com/giriprasad51/Iot-Theft-Alert-Box-with-call-and-gmail-notification/blob/main/imgs/Picture1.png" align="left" height="1000" width="700" ></a>



##Step 2:

Connect the WI-FI module to the computer/laptop and connect it to run the IOT cloud and process the code snippet.

![App Screenshot](https://github.com/giriprasad51/Iot-Theft-Alert-Box-with-call-and-gmail-notification/blob/main/imgs/Screenshot%20(261).png)

##Step 3: 
The readings from the sensor have been recorded in the google sheet for every 1sec difference by using Webhook Api and a behind of that a python code running infinity loop and waiting for a theif opening or moving box

![App Screenshot](https://github.com/giriprasad51/Iot-Theft-Alert-Box-with-call-and-gmail-notification/blob/main/imgs/Screenshot%20(265).png)


##Step 4: 
If theif open or move box Ultra-sonic detected a object and gives 1 in google sheet and condition staticified in python code and execute block of statements and open the links in that block which are responsble for phone call and gmail(the links genrated using twilio api https://www.twilio.com/) 



![App Screenshot](https://github.com/giriprasad51/Iot-Theft-Alert-Box-with-call-and-gmail-notification/blob/main/imgs/WhatsApp%20Image%202023-01-08%20at%2011.23.56.jpeg)
![App Screenshot](https://github.com/giriprasad51/Iot-Theft-Alert-Box-with-call-and-gmail-notification/blob/main/imgs/WhatsApp%20Image%202023-01-08%20at%2010.22.18.jpeg)

