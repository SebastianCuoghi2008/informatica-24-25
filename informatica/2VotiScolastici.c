/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float voto1;
    float voto2;
    int scelta;
    srand(time(NULL));

    printf("Inserisci il primo voto: ");
    scanf("%f", &voto1);
    voto2 = rand()%5+4;
    printf("Il voto casuale è: %.0f", voto2);
    printf("Scegli un'operazione \n- 1 mostrare la media dei due voti \n- 2 mostrare il voto maggiore tra i due\n- 3 mostrare il voto minore tra i due. \n- 4 mostrare il numero di voti sufficiente tra i due.");
    scanf("%d", &scelta);
    
    if(voto1>=2 && voto1<=10){
        switch(scelta){
            case 1:
                printf("la media dei due numeri è: %.2f\n", (voto1+voto2)/2);
                break;
            case 2:
                if(voto1>voto2){
                    printf("il primo voto è maggiore.\n");
                }
                else if(voto1==voto2){
                    printf("i voti sono uguali.\n");
                }
                else{
                    printf("il secondo voto è maggiore.\n");
                }
                break;
            case 3:
                if(voto1<voto2){
                    printf("il primo voto è minore.\n");
                }else if(voto1==voto2){
                    printf("i voti sono uguali.\n");
                }
                else{
                    printf("il secondo voto è minore.\n");
                }
                break;
            case 4:
                if(voto1>=6 && voto2>=6){
                    printf("entrambi i voti sono sufficienti.\n");
                }
                else if(voto1>=6 || voto2>=6){
                    printf("un solo voto è sufficiente.\n");
                }
                else{
                    printf("entrambi i voti sono insufficienti.\n");
                }
                break;
            default:
                printf("è stata scelta un opzione non valida.\n");
        }
    }
    else{
        printf("il voto inserito non è valido.\n");
    }
    return 0;
}