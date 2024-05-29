const int keySwitchPin = 2; // Button to simulate turning the key
const int secretSwitchPin = 3; // Secret switch B
const int engineRunningPin = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(keySwitchPin, INPUT); // Use internal pullup resistor for the key simulation button
  pinMode(secretSwitchPin, INPUT); // Secret switch with pullup resistor
  pinMode(engineRunningPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(keySwitchPin) == HIGH && digitalRead(secretSwitchPin) == HIGH && digitalRead(engineRunningPin) == LOW) {
   
    Serial.println("Engine start simulated");
  }
  else
  {
    Serial.println("nedela");
  }
}
