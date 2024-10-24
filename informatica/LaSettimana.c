#include <stdio.h>

int main(){

    int numero;

    printf("Inserisci un numero settimanale:");
    scanf("%d", &numero);

    switch(numero) {
        case 1:
            printf("é lunedì");
            break;
        case 2:
            printf("é martedì");
            break;
        case 3:
            printf("é mercoledì");
            break;
        case 4:
            printf("é giovedì");
            break;
        case 5:
            printf("é venerdì");
            break;
        case 6:
            printf("é sabato");
            break;
        case 7:
            printf("é domenica");
            break;
        default:
            printf("Il numero inserito non è valido");           
    }
    return 0;
}