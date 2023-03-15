/* include guard pentru
 * orice eventualitate */
#ifndef CARTI_H
#define CARTI_H

/* Proprietatile unei carti
 * de joc sunt declarate pe
 * aceasta structura */

typedef struct {
   char val;
   char culoare;
   char simbol;
}carte;

/* Prototpurile functiilor */

char transformare(int n, int nr);
void ordonare_init(carte *carti);
void amestecare(carte *carti);
void afisare(carte *carti);

#endif
