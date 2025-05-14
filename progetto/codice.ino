#include <LiquidCrystal.h> // serve per controllare il display LCD
#include <Keypad.h>        // serve per usare il tastierino
#include <math.h>          // serve per funzioni matematiche (tipo log)
// variabili usate per leggere i sensori
int valoreADC;
float temperaturaC;
int valoreLuce;
float luminositaPercentuale;
int contatore = 0;
// Costanti per il termistore
const float BETA = 3950;       // Costante beta
const float R0 = 10000.0;      // Resistenza nominale a 25°C
const float T0 = 298.15;       // Temperatura 25°C in Kelvin (25 + 273.15)
const float R_SERIE = 10000.0; // Resistenza in serie con il termistore;
// soglie di temperatura e luce
const float SOGLIA_TEMPERATURA = 30.0;
const float SOGLIA_LUMINOSITA = 50.0;
const float SOGLIA_LUMINOSITA2 = 25.0;
// pin collegati al display LCD
const int pinRs = 12, pinEn = 11, pinD4 = 5, pinD5 = 4, pinD6 = 3, pinD7 = 2;
LiquidCrystal lcd(pinRs, pinEn, pinD4, pinD5, pinD6, pinD7); // oggetto per controllare il display
// password per accedere alle funzioni
const String password1 = "4222";
const String password2 = "6555";
String passwordInserita = "";
int modalita = 0;
// configurazione dei tasti del tastierino
const byte RIGHE = 3;
const byte COLONNE = 3;
char tasti[RIGHE][COLONNE] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
};
byte pinRighe[RIGHE] = {13, 10, 9};
byte pinColonne[COLONNE] = {8, 7, 6};
Keypad tastierino = Keypad(makeKeymap(tasti), pinRighe, pinColonne, RIGHE, COLONNE);
// funzione che legge 4 tasti dal tastierino come password
void leggiPassword() {
  passwordInserita = "";     // azzera la password
  lcd.clear();               // pulisce il display
  lcd.write("Enter password"); // scrive il messaggio
  lcd.setCursor(0, 1);       // va sulla riga sotto

  for (int i = 0; i < 4;) {
    char tasto = tastierino.getKey(); // legge un tasto
    if (tasto != NO_KEY) {
      passwordInserita += tasto;  // lo aggiunge alla stringa
      lcd.write('*');             // mostra un asterisco
      i++;                        // conta i 4 tasti
    }
  }
}
// controlla se la password è giusta
void verificaPassword() {
  lcd.clear();
  if (passwordInserita == password1 || passwordInserita == password2) {
    // stampa "Success" lettera per lettera con codice ASCII
    lcd.write(83); // S
    lcd.write(117); // u
    lcd.write(99); // c
    lcd.write(99); // c
    lcd.write(101); // e
    lcd.write(115); // s
    lcd.write(115); // s

    // decide la modalità in base alla password
    if(passwordInserita==password1){
      modalita=1;
    }else{
      modalita=2;
    }
  } else {
    lcd.print("password errata");
    // se la password è sbagliata mostra il messaggio
    
  }
  delay(2000); // aspetta 2 secondi
}
// legge la temperatura dal termistore e attiva un motore se troppo alta
void gestisciTemperatura() {
  valoreADC = analogRead(A0);

  float tensione = valoreADC * (5.0 / 1023.0);
  float R = R_SERIE * (5.0 / tensione - 1.0);

  float temperaturaK = 1.0 / (1.0 / T0 + (1.0 / BETA) * log(R / R0));
  temperaturaC = temperaturaK - 273.15;

  lcd.clear();
  // scrive "Temp: X C" con caratteri ASCII
  lcd.write(84);  // T
  lcd.write(101); // e
  lcd.write(109); // m
  lcd.write(112); // p
  lcd.write(58);  // :
  lcd.write(32);  // spazio
  lcd.print(round(temperaturaC)); // stampa il numero
  lcd.write(32);  // spazio
  lcd.write(67);  // C
  delay(1500);

  if (temperaturaC > SOGLIA_TEMPERATURA) {
    lcd.clear();
    lcd.write("Motore ON"); // accende il motore

    contatore = 0;
    while (contatore < 100) {
      digitalWrite(A4, HIGH);
      delay(100);
      digitalWrite(A4, LOW);
      contatore++;
    }
  } else {
    lcd.clear();
    // scrive "Temp OK"
    lcd.write(84);  // T
    lcd.write(101); // e
    lcd.write(109); // m
    lcd.write(112); // p
    lcd.write(32);  // spazio
    lcd.write(79);  // O
    lcd.write(75);  // K
    delay(1000);
  }
}
// legge la luce e accende delle uscite in base alla soglia
void gestisciLuminosita() {
  valoreLuce = analogRead(A1);
  luminositaPercentuale = map(valoreLuce, 6, 679, 0, 100);
  luminositaPercentuale = constrain(luminositaPercentuale, 0, 100);

  lcd.clear();
  lcd.write(76);  // L
  lcd.write(117); // u
  lcd.write(109); // m
  lcd.write(105); // i
  lcd.write(120); // x
  lcd.write(58);  // :
  lcd.write(32);  // spazio
  lcd.print(luminositaPercentuale);
  lcd.write(37);//%

  if (luminositaPercentuale < SOGLIA_LUMINOSITA) {
    // Se poca luce accendo LED su A5
    for (int i = 0; i < 100; i++) {
      digitalWrite(A5, HIGH);

      // Se luce ancora più bassa accendo anche A3
      if (luminositaPercentuale < SOGLIA_LUMINOSITA2) {
        digitalWrite(A3, HIGH);
      }

      delay(100);
      digitalWrite(A5, LOW);
      digitalWrite(A3, LOW);
    }
  } else {
    lcd.setCursor(0, 1);
    //lcd.print("Luce sufficiente");
    lcd.write(76);  // L
    lcd.write(117); // u
    lcd.write(99);  // c
    lcd.write(101); // e
    lcd.write(32);  // spazio
    lcd.write(115); // s
    lcd.write(117); // u
    lcd.write(102); // f
    lcd.write(105); // f
    lcd.write(99);  // c
    lcd.write(105); // i
    lcd.write(101); // e
    lcd.write(110); // n
    lcd.write(116); // t
    lcd.write(101); // e
    delay(1000);
  }
}


void resettaLCD() {
  lcd.clear();
  //lcd.print("Enter password");
  // Scrivo "Enter password" carattere per carattere
  lcd.write(69);
  lcd.write(110);
  lcd.write(116);
  lcd.write(101);
  lcd.write(114);
  lcd.write(32);
  lcd.write(112);
  lcd.write(97);
  lcd.write(115);
  lcd.write(115);
  lcd.write(119);
  lcd.write(111);
  lcd.write(114);
  lcd.write(100);
  lcd.setCursor(0, 1);
  modalita = 0;
}
// parte iniziale del programma
void setup() {
  Serial.begin(9600);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  lcd.begin(16, 2); // imposta il display
  resettaLCD();     // mostra "Enter password"
}
// ciclo continuo del programma
void loop() {
  leggiPassword();     // chiede la password
  verificaPassword();  // controlla la password

  if (modalita == 1) {
    gestisciTemperatura(); // se password1: va alla temperatura
  }

  if (modalita == 2) {
    gestisciLuminosita(); // se password2: va alla luce
  }

  resettaLCD(); // dopo torna al menu iniziale
}

