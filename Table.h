#ifndef TABLE_H
#define TABLE_H

typedef struct PTable{
    int **matrix;
    int MAX;
    int n;
}PTable;


PTable *createTable(int MAX, int n);
void fillTable(int init, int W, int *v, PTable *K);
int findLargest(PTable *t);
void freeTable(PTable *t);

#endif
