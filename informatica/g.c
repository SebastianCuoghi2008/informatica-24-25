/*dato un numero  più cifre stampare
le cifre che compongono il numero*/

int main(){
    int numero=0;
    int quoziente=0;
    int resto=0;

    printf("inserisci un numero");
    scanf("%d", &numero);

    quoziente=numero / 10;
    resto=numero % 10;
    printf( la prima cifra è", &resto);
    
    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf(  la seconda cifra è", &resto);

    resto=quoziente % 10;
    quoziente=quoziente / 10;
    printf( è la terza cifra è", &resto);

    return 0;
}
    
    
    
    
