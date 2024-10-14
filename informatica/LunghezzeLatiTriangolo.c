/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/

#include <stdio.h>

int main(){
    int N1=0;
    int N2=0;
    int N3=0;
    int somma=0;

    printf("inserisci il primo numero lato:");
    scanf("%d", &N1);
    printf("inserisci il secondo numero lato:");
    scanf("%d", &N2);
    printf("inserisci il terzo numero lato:");
    scanf("%d", &N3);

    if(N1>N2 && N2>N3){
        somma=N1+N2+N3;
        printf("le lunghezze dei lati numeri sono di un triangolo");
    }
    else{
        printf("le lunghezze dei lati numeri non sono di un triangolo");
    }
    return 0;
}