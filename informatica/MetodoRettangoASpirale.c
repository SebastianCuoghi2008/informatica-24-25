/*Scrivi un programma per la rappresentazione del rettangolo “a spirale”, che contiene numeri naturali,
definito riempiendo le righe del rettangolo con numeri consecutivi e partendo da 1 nell’angolo in alto a sinistra.
Si consideri ad esempio il caso N=5. Il rettangolo è il seguente:
1  2  3  4  5  
10 9  8  7  6  
11 12 13 14 15  
20 19 18 17 16  
21 22 23 24 25  

Il programma riceve da tastiera un numero intero N e visualizza le prime N righe del rettangolo.*/

 #include <stdio.h>
 int main(){
    int numero=0;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        printf("%d\t", numero+i);
        for(int j=1; j<=numero; j++){
            printf("%d\t", numero+j);
            for(int h=1; h<=numero; h++){
                printf("%d\t", numero+h);
                for(int k=1; k<=numero; k++){
                    printf("%d\t", numero+k);
                }
            }
        } 
    }
    return 0;
 }