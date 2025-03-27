/*Scrivi un codice in C che disegni usando gli asterischi una lettera L alta 10 e larga 5*/

#include <stdio.h>

int main(){
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            if(j==0 || i==9){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}