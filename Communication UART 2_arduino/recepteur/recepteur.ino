void setup() {
  Serial.begin(9600); // Initialisation de la communication série
  Serial.println("Attente des données...");
}

void loop() {
  if (Serial.available()) {
    char received = Serial.read();    // Lecture du caractère reçu
    Serial.print("Caractère reçu : ");
    Serial.println(received);         // Affichage du caractère sur le moniteur série
  }
}
