/*Scrivi un programma che stampi la tavola pitagorica.*/

#include <stdio.h>
int main(){
    
    for(int t=1; at<=10; t++){
        for(int i=1; i<=10; i++ ){
            printf("%d\t", t*i);
        }
        printf("\n");
    }
    return 0;
}