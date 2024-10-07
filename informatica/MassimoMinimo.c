/*Dati 3 numeri stampare il più piccolo, il più grande
 e la loro media aritmetica.*/

 #include<stdio.h>

 int main(){
    float N1=0;
    float N2=0;
    float N3=0;
    float media=0;
    float max=0;
    float min=0;

    printf("inserisci i tre valori: ");
    scanf("%f%f%f", &N1, &N2, &N3); //i tre valori vanno inseriti con uno spazio l'uno dall'altro 
    
    max=N1;
    min=N1;
    if(max<N2){
        max=N2;
        if(max<N3)
            max=N3;  
    }
    else
        if(max<N3)
            max=N3;
    
    printf("il massimo è: %.2f", max);
    if(min>N2){
        min=N2;
        if(min>N3)
            min=N3;
    }
    else
        if(min>N3)
            min=N3;
    printf("\nil minimo è: %.2f", min);

    media=(N1+N2+N3)/3;
    printf("\nla media vale: %.2f", media);

    return 0;
 }
