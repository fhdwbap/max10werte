/* max10werte.c
   Elementares Beispielprogramm: maximal zehn ganzzahlige Werte einlesen

   http://www.github.com/fhdwbap/max10werte
   BAP 16.10.2014, 16.11.2017
 */
 
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
  int weiter = 1; /* true */
  int anzahl = 0;
  int wert = 0;
  int summe = 0;
  float mittel = 0.0;
  
  do 
  {
    int eingabe_weiter = -1;
    do
    {  
      printf("Wert eingeben? [1=ja, 0=nein]   => ");
      scanf("%d",&eingabe_weiter);
    } while (eingabe_weiter < 0 || eingabe_weiter > 1);
    weiter = eingabe_weiter;
    
    if (weiter)
    {
      anzahl++;  /* entspricht: anzahl = anzahl + 1; */
      printf("Ganzzahligen Wert Nr. %2d eingeben:  ",anzahl);
      scanf("%d",&wert);
      summe += wert;  /* entspricht: summe = summe + wert; */
    }
    
  } while (weiter && anzahl < 10); 
  
  if (anzahl > 0)
  {
    mittel = (float)summe / anzahl;
    printf("Es wurde(n) %d Wert(e) eingegeben.\n", anzahl);
    printf("Das arithmetische Mittel ist %.4f.\n",mittel);
  }
  else
  {
    printf("Es wurde kein Wert eingegeben.\n");
  }
  
  return EXIT_SUCCESS;
}
/* end of file max10werte.c */
