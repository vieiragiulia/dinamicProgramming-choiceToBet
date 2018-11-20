#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Table.h"


PTable *createTable(int m, int n){
    PTable *t = (PTable*)calloc(1, sizeof(PTable));
    t->matrix = (int**)calloc(m+2, sizeof(int*));
    for(int i = 0; i < m+2; i++)t->matrix[i] = (int*)calloc(n+2, sizeof(int));
    t->MAX = m+1;
    t->n = n+1;
    return t;
}


void fillTable(int init, int W, int *v, PTable *t){
   t->matrix[init][0] = 1;
   for (int i = 1; i < t->n; i++){
       for (int j = 0; j < t->MAX; j++){

          if(t->matrix[j][i-1] == 1){
             if(j + v[i-1] <= W)t->matrix[j+v[i-1]][i] = 1;
             if(j - v[i-1] >= 0)t->matrix[j-v[i-1]][i] = 1;
          }
       }
    }
}


int findLargest(PTable *t){
      for(int i = t->MAX-1; i >= 0; i--) if(t->matrix[i][t->n-1] == 1) return i;
      return -1;
}


void freeTable(PTable *t){
    for(int i = 0; i < t->MAX+1; i++) free(t->matrix[i]);
    free(t->matrix);
    free(t);
}
