#include <stdio.h>

// Funzione che calcola minimo e massimo tra due numeri
void trovaMinMax(int _num1, int _num2, int *_min, int *_max);

int main(){
    int num1, num2, min, max;
    printf("Inserisci il valore 1: ");
    scanf("%d", &num1);
    printf("Inserisci il valore 2: ");
    scanf("%d", &num2);

    trovaMinMax(num1, num2, &min, &max);

    printf("Il valore più grande è %d", max);
    printf("Il valore più piccolo è %d", min);
    
}

void trovaMinMax(int _num1, int _num2, int *_min, int *_max){
    if(_num1 > _num2) {
        *_max = _num1;
        *_min = _num2;
    }
    else {
        *_max = _num2;
        *_min = _num1;
    }
}