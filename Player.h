#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>


typedef struct Player{
    int total;
    int max;
    int min;
    int size;
    int *sequence;
}Player;


Player *createPlayer(FILE *input);
void freePlayer(Player *p);


#endif
