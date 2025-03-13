/*descrizione degli array*/

#include <stdio.h>
#define MAX 10

int main(){
    int V[MAX];     //int V[10];

    for(int i=0; i<10; i++){
        V[i]=1;
        printf("%d\t", V[i]);
    }
    return 0;
}