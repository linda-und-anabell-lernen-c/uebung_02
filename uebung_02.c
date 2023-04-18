/****************************************/
/* Linda von Birgelen                   */
/* 2034447                              */
/* Gruppe: Di14, Leiter: Lucas Sieg     */
/* Uebungsblatt: 02, Aufgabe: B-2, B-3  */
/* Version: 1.0                         */
/* Datum: 21.04.2023                    */
/* Status: lauffaehig                   */
/****************************************/

//Aufgabe B-3

#include <stdio.h>

int main()
{
  int n;
  printf("Bitte geben Sie eine Zahl ein: ");
  scanf("%i", &n);
  int m;
  printf("Bitte geben Sie eine weitere Zahl ein: ");
  scanf("%i", &m);
  int a = n + m;
  int b = n - m;
  int c = n * m;
  // Wegen Ganzzahldivision zu float casten (schöner als float für alles zu benutzen)
  float d = (float)n / m; 
  printf("%i + %i = %i\n", n, m, a);
  printf("%i - %i = %i\n", n, m, b);
  printf("%i * %i = %i\n", n, m, c);
  printf("%i / %i = %f\n", n, m, d);
}

// TODO: Antworten für B-2 hier eintragen
// Aufgabe B-2

// Bezeichner   | Zulässig [X] | Begründung bei Unzulässigkeit
// char         |     [ ]      |
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