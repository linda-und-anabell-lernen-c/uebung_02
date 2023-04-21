// TODO: durch eure Daten ersetzen
/****************************************/
/* Anabell Korsten 2032264              */
/* Gruppe: Di10, Leiter: Timo Palm      */
/* Uebungsblatt: 2, Aufgabe: B-3        */
/* Version: 1.0                         */
/* Datum: 21.04.2023                  */
/* Status: lauffaehig                   */
/****************************************/
#include <stdio.h>

int main()
{ 
  int n;
printf("Bitte geben Sie eine ganze Zahl ein: ");
scanf("%i", &n);
int m;
printf("Bitte geben Sie eine weitere ganze Zahl ein: ");
scanf("%i", &m);
int a = n + m;
int b = n - m;
int c = n * m;
// Nun benutze ich double, weil bei Division zweier ganer Zahlen eine Kommazahl rauskommen kann
double d =(double) n / m;
 printf("%i + %i = %i\n", n, m, a);
printf("%i - %i = %i\n", n, m, b);
printf("%i * %i = %i\n", n, m, c);
printf("%i / %i = %f\n", n, m, d);
}

// TODO: Antworten für B-2 hier eintragen
// Aufgabe B-2:
// Bezeichner   | Zulässig [X] | Begründung bei Unzulässigkeit
// char         |     [X]      |
// Sizeof       |     [ ]      |
// c&a          |     [ ]      |
// leer zeichen |     [ ]      |
// meineZahl    |     [ ]      |
// null815      |     [ ]      |
// union        |     [ ]      |
// -ergebnis    |     [ ]      |
// ;-)          |     [ ]      |
// elseif       |     [ ]      |
// _irgendwas   |     [ ]      |
// Auto         |     [ ]      |
// struct       |     [ ]      |
// long         |     [ ]      |
// default      |     [ ]      |
// #hashtag     |     [ ]      |