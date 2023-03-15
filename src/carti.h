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
