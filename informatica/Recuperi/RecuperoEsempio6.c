/*Scrivi un esercizio in C che permetta di inserire il numero di ore a scuola della giornata. Quindi stampa per ogni ora se si può andare in bagno oppure no.*/

#include <stdio.h>

int main(){
    int ore=0;

    do{
        printf("Inserisci il numero di ore della giornata: ");
        scanf("%d", &ore);
    }while(ore<4 || ore>8);

    for(int i=1; i<=ore; i++){
        if(i%2==0){
            printf("%d ora: sì\n", i);
        }else{
            printf("%d ora: no\n", i);
        }
    }
}