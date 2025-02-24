/*sviluppare un programma in C che svilippi il triangolo di floyd
N=5
1
2 3
4 5 6
7 8 9 10 
11 12 13 14 15*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numero=0;
    int floyd=0;
    int contatore=0;

    floyd=rand()%20+1;

    for(int i=0; i<=floyd; i++){
        while(contatore<i){
            numero++;
            printf("%d ", numero);
            contatore++;
        }
        contatore=0;
        printf("\n");
    }
    return 0;
}