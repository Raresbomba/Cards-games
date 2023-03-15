/*  This file is part of our cards game project.
 * (https://github.com/Raresbomba/Cards-games)
 *
 * Copyright (c) 2023 Rares-Alexandru Chirita <zzrareszz@gmail.com>
 * Copyright (c) 2023 Ty3r0X <ty3r0x@chaox.ro>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "carti.h"
#include <cmath>
#include <iostream>
using namespace std;
char transformare(int n, int nr) {

  /* IMPORTANT NOTICE: 10=0
   * THIS IS NOT A BUG, WONTFIX,
   * WE CHOSE TO MAKE IT LIKE THIS <3 :))*/
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
    printf("%c %c \n", carti[i].val, carti[i].simbol);
  }
}
