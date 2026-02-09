// Temperature Warning Light - FIXED VERSION
int tempPin = A0;
int ledPin = 13;
float threshold = 30.0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100.0;
  
  
  Serial.print("Raw: ");
  Serial.print(sensorValue);
  Serial.print(" → Voltage: ");
  Serial.print(voltage);
  Serial.print(" → Temp: ");
  Serial.print(temperature);
  Serial.println(" °C");

  
  if (temperature > threshold) {
    digitalWrite(ledPin, HIGH);   // HOT → LED ON
    Serial.println("→ LED ON");
  } else {
    digitalWrite(ledPin, LOW);    // COOL → LED OFF
    Serial.println("→ LED OFF");
  }
  
  delay(300);   
}
