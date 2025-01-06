/*Sviluppa un programma che eroga il resto per un distributore di bevande automatico. Il cliente sceglie un prodotto (numero intero da 1 a 5)
e gli viene visualizzato il costo: quindi inizia a inserire monete nell’apposita fessura, che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione della sequenza e restituisce una serie di
numeri interi corrispondenti al resto in monete da 1 e 5 centesimi.*/

#include <stdio.h>

int main(){
    int numeroMoneta=0;
    int moneta=0;
    int contatore=0;

    printf("scegli un numero intero da 1 a 5");
    scanf("%d", &numeroMoneta);

    switch(numero){
        case 1:
            moneta=1
            printf("la moneta vale un centesimo");
            break;
        case 2:
            moneta=5
            printf("la moneta vale 5 centesimi");
            break;
        case 3:
            moneta=10
            printf("la moneta vale 10 centesimi");
            break;
        case 4:
            moneta=20
            printf("la moneta vale 20 centesimi");
            break;
        case 5:
            moneta=50
            printf("la moneta vale 50 centesimi");
            break;
        default:
            printf("non inserire caratteri che non c'entrano");
            break;       
    }
    while(contatore<5){
        printf("\n inserisci una moneta: ");
        scanf("%d", &numeroMoneta);
        contatore++;
    }
    printf("hai inserito %d monete da %d centesimi", numeroMOneta, moneta);
    return 0;
}
    