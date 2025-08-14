void setup() {
  Serial.begin(9600); // Initialisation de la communication série à 9600 bauds
}

void loop() {
  Serial.write('A');  // Envoi du caractère 'A'
  delay(1000);        // Attente d'1 seconde avant le prochain envoi
}
