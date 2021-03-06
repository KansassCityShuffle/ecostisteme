#ifndef PONT_H
#define PONT_H

#include "eco.h"
#include "mob.h"
#include "main.h"
#include "mobs_ia.h"
#include "pecheur.h"

void spawn_pont(int x_pecheur, int y_pecheur, int *x_pont, int *y_pont, Mob * plateau[][TAILLE_PLATEAU]);

void draw_pont(int x, int y, couleurs coul);

int case_valide_pont(int x_pont, int y_pont, int x_pecheur, int y_pecheur, Mob * plateau[][TAILLE_PLATEAU]);

void place_pont (int x_pecheur, int y_pecheur, int *x_pont, int *y_pont, Mob * plateau[][TAILLE_PLATEAU]);

void construire_pont(Mob * plateau[][TAILLE_PLATEAU], Mob * pecheur, Liste * species[]);

#endif
