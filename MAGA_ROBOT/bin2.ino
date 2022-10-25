void l_go() {
  Serial.println("l_go");
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(xxx);
}

void l_back() {
  Serial.println("l_go");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(xxx);
}

void r_go() {
  Serial.println("r_go");
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(xxx);
}

void r_back() {
  Serial.println("r_go");
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(xxx);
}
