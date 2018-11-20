#include <stdio.h>
#include <stdlib.h>
#include "Player.h"

Player *createPlayer(FILE *input){
    Player *p = (Player*)calloc(1, sizeof(Player));

    fscanf(input, "%d", &p->size);
    fscanf(input, "%d", &p->total);
    fscanf(input, "%d", &p->max);
    fscanf(input, "%d", &p->min);

    p->sequence = (int*)calloc(p->size+1, sizeof(int));
    for(int i = 0; i < p->size; i++) fscanf(input, "%d", &p->sequence[i]);

    return p;
}


void freePlayer(Player *p){
    free(p->sequence);
    free(p);
}
