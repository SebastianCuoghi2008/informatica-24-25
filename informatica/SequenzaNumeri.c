/*Scrivi un programma che permetta all’utente di inserire 5 numeri interi e verifichi se questi numeri appartengono alla sequenza dei numeri naturali,
cioè sono tutti differenti e hanno tra di loro distanza unitaria nella linea dei numeri. (ad esempio la sequenza 3-4-5-6-7 è una sequenza adeguata,
3-4-5-7-8 non è una sequenza adeguata)*/

#include <stdio.h>

int main(){
    int Na=0;
    int Nb=0;
    int Nc=0;
    int Nd=0;
    int Ne=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &Na);
    printf("inserisci il secondo numero: ");
    scanf("%d", &Nb);
    printf("inserisci il terzo numero: ");
    scanf("%d", &Nc);
    printf("inserisci il quarto numero: ");
    scanf("%d", &Nd);
    printf("inserisci il quinto numero: ");
    scanf("%d", &Ne); 

    if (""){
        printf("la sequenza %d %d %d %d %d è adeguata");
    }
    else{
        printf("la sequenza %d %d %d %d %d non è adeguata"); 
    }
    return 0;
}