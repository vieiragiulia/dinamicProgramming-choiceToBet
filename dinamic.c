#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Table.h"


int main(int argc, char *argv[]){
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int n;
    fscanf(input, "%d", &n);

    for(int i = 0; i < n; i++){
        Player *p = createPlayer(input);
        PTable *t = createTable(p->max, p->size);

        fillTable(p->total, p->max, p->sequence, t);
        
        p->total = findLargest(t);

        if(p->total >= p->min) fprintf(output, "S,%d\n", p->total);
        else fprintf(output, "N,%d\n", p->total);

        freePlayer(p);
        freeTable(t);
    }

    fclose(input);
    fclose(output);

    return 0;
}
