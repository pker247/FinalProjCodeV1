int led_pin = 13;
int flame_sensor_pin = 22;
int flame_sensor_pin2 = 1;
int flame_pin = HIGH;

void setup(){
pinMode ( led_pin , OUTPUT );                               // declaring led pin as output pin
pinMode ( flame_sensor_pin , INPUT );             // declaring sensor pin as input pin for Arduino
Serial.begin ( 9600 );                                    // setting baud rate at 9600
}

void loop(){

  flame_pin = digitalRead ( flame_sensor_pin );                // reading from the sensor

  if (flame_pin == LOW ){                                        // applying condition
   Serial.println ( " FLAME , FLAME , FLAME " );
    digitalWrite ( led_pin  , HIGH );// if state is high, then turn high the led
  }

  else{
    Serial.println ( " no flame " );
    digitalWrite ( led_pin , LOW );// otherwise turn it low
  } 
  Serial.println(flame_pin);
  Serial.println(analogRead(flame_sensor_pin2));
}
