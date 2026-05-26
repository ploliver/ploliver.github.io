// the setup function runs once when you press reset or power the board
int sensorValueR = 0;
int sensorValueG = 0;
int sensorValueB = 0;

float voltageR = 0;
float voltageG = 0;
float voltageB = 0;

int LEDpin = 12; // 11 - azul ; 12 - verde ; 13 - rojo
int ReadV0 = A0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDpin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);       
  
  sensorValueR = analogRead(A1) - analogRead(A0);
  sensorValueG = analogRead(A2) - analogRead(A0);
  sensorValueB = analogRead(A3) - analogRead(A0);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  voltageR = sensorValueR * (5.0 / 1023.0);
  voltageG = sensorValueG * (5.0 / 1023.0);
  voltageB = sensorValueB * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println("R (V)");
  Serial.println(voltageR);
  Serial.println("G (V)");
  Serial.println(voltageG);
  Serial.println("B (V)");
  Serial.println(voltageB);
  Serial.println("-----------");
}
