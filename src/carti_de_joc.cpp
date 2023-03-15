#include "carti.h"
#include <cmath>
#include <iostream>
/*IMPORTANT NOTICE: 10=0
THIS IS NOT A BUG, IT WON'T FIX, WE CHOSE TO MAKE IT LIKE THIS <3 :))*/
using namespace std;
char transformare(int n, int nr) {
  switch (nr) {
  case 1:
    n = 'A';
    break;
  case 10:
    n = '0';
    break;
  case 11:
    n = 'J';
    break;
  case 12:
    n = 'Q';
    break;
  case 13:
    n = 'K';
    break;

  default:
    break;
  }
  return n;
}
void ordonare_init(carte *carti) {
  int i, n = 53;
   int aux;
  for (i = 1; i <= 13; i++) {
    aux = i + '0';
    carti[i].val = transformare(aux, i);
    carti[i].simbol = 'P';
  }
  for (i = 14; i <= 26; i++) {
    aux = i - 13 + '0';
    carti[i].val = transformare(aux, i - 13);
    carti[i].simbol = 'I';
  }
  for (i = 27; i <= 39; i++) {
    aux = i - 26 + '0';
    carti[i].val = transformare(aux, i - 26);
    carti[i].simbol = 'T';
  }
  for (i = 40; i <= 52; i++) {
    aux = i - 39 + '0';
    carti[i].val = transformare(aux, i - 39);
    carti[i].simbol = 'R';
  }
}
void amestecare(carte *carti) {
  srand(time(NULL));
  for (int i = 1; i <= 52; i++) {
    swap(carti[i], carti[rand() % 52]);
  }
}
void afisare(carte *carti) {
  for (int i = 1; i <= 52; i++) {
    printf("%c %c \n",carti[i].val,carti[i].simbol);
  }
}
