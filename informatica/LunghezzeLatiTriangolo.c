/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/

#include <stdio.h>

int main(){
    int numero1=0;
    int numero2=0;
    int numero3=0;
    int somma=0;

    printf("inserisci il primo numero lato: ");
    scanf("%d", &numero1);
    printf("inserisci il secondo numero lato: ");
    scanf("%d", &numero2);
    printf("inserisci il terzo numero lato: ");
    scanf("%d", &numero3);

    if(numero1>numero2 && numero2>numero3){
        somma=numero1+numero2+numero3;
        printf("le lunghezze dei lati numeri sono di un triangolo");
    }
    else{
        printf("le lunghezze dei lati numeri non sono di un triangolo");
    }
    return 0;
}