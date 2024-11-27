#include <stdio.h>

int main(){

    char vocale;
    
    printf("Inserisci una lettera");
    scanf("%c", &vocale);
    
    switch (vocale)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("è una vocale");
        break;
        default:
            printf("non è una vocale");
            break;
    }
}