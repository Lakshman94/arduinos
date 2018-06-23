/* 
 * Developer: likith | Date: 23/06/18
 * Simple code to control an LED through bluetooth module
 * This code assumes the following:
 * - Bluetooth module is connected to ports 0/1 on Arduino
 * - The user uses a Bluetooth Terminal app on android to send data
 * - LED is connected to pin 6 on the arduino
 * 
 * * Send 1 to ON, Send 0 to OFF
 */

char data = 0;
void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if (data == '1') {
      digitalWrite(6, HIGH);
    } else if (data == '0'){
      digitalWrite(6, LOW);
    }
  }

}
