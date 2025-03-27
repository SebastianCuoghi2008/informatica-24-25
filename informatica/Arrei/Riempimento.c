/*riempi un vettore di 100 elementi casuali compresi tra 0 e 5, quindi mostra quante volte compare nel vettore il 3*/

#include <stdio.h>
#include "libArray.h"
#include "libArray.c"
#define DIM 100

int main(){

    int vettore[DIM];

    riempiVettoreCasuale(vettore, DIM, 0, 5);

    printf("%d\n", contaOccorrenze(vettore, DIM, 3));

    stampaVettore(vettore, DIM, '\n');

    return 0;
}