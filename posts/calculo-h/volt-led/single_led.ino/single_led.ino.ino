// the setup function runs once when you press reset or power the board
int sensorValueR = 0;

float voltageR = 0;

int LEDpin = 11; // 11 - azul ; 12 - verde ; 13 - rojo

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDpin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(10
  v <0);       
  
  sensorValueR = analogRead(A0) - analogRead(A1);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  voltageR = sensorValueR * (4.9 / 1023.0);
  // print out the value you read:
  Serial.println("Voltaje / V");
  Serial.println(voltageR);
  Serial.println("-----------");
}
