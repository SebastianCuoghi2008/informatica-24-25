/*Verificare se un numero dato in input è
divisibile sia per 3 sia per 5*/

#include <stdio.h>
int main (){
    int numero=0;

    printf("inserisci un numero a piacere");
    scanf("%d", &numero);

    if(numero% 5 == 0){
        if(numero% 3 == 0){
            printf("%d è divisibile sia per 5 che per 3", numero);
        }
        else{
            printf("%d è divisibile per 5 ma non per 3", numero);
        }
    }
    else{
        printf("%d non è divisibile per 5", numero);
    }
    return 0;
}


    



        


    
