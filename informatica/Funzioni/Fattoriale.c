/*Calcolare il fattoriale del numero*/

#include <stdio.h>
#include <math.h>

long fattoriale(int _N);

int main(){
   int numero=0;
   long fattoriale;

   do{
        printf("inserisci un numero: ");
        scanf("%d", &numero);
   }while(numero<=0);
   fattoriale=fattoriale(numero);
   printf("il fattoriale  é %ld", &fattoriale);

}
long fattoriale(int _N){
    long int sommaF=1;

    for(int i=1; i<_N; i++){
        sommaF*=i;
    }
    return sommaF;
}