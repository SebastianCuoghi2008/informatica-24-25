// Funzione che scambia i valori di due numeri
#include <stdio.h>
void swap(int *a, int *b);
int main(){

int num1=0;
int num2=0;

printf("inserisci il 1 valore: ");
scanf("%d", &num1);
printf("inserisci il 2 valore: ");
scanf("%d", &num2);

swap(&num1, &num2);

printf("%d\n", num1);
printf("%d", num2);


return 0;
}
void swap(int *a, int *b){
    int temp=0;

    temp=*a;
    *a=*b;
    *b=temp;
}