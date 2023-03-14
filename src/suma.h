#ifndef SUMA_H
#define SUMA_H
int suma(int a,int b);
int dif(int a,int b);
typedef struct{
    char val;
    char simbol;
 }carte;
void ordonare_init(carte *carti);
void amestecare(carte *carti);
void afisare(carte *carti);
char transformare(char n);
#endif
#ifdef __unix__
#include<unistd.h>
#elif defined _WIN32
#include<windows.h>
#endif