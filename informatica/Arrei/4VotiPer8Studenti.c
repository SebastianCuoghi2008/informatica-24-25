/*Scrivi un programma che permetta all'utente di salvare in una matrice 4 voti per ognuno di 8 studenti diversi. Quindi salva in un vettore la media dei voti di ogni studente e stampala.*/
#include <stdio.h>

#define N_STUDENTI 8
#define N_VOTI 4

void riempiMatrice(float _voti[][N_VOTI], int r, int c);
void stampaMatrice(float _voti[][N_VOTI], int r, int c);
void calcolaMedie(float _voti[][N_VOTI], int r, int c, float _medie[]);

void stampaMedie(float _medie[], int s);
int main(){
    float voti[N_STUDENTI][N_VOTI], medie[N_STUDENTI];

    riempiMatrice(voti, N_STUDENTI, N_VOTI);
    stampaMatrice(voti, N_STUDENTI, N_VOTI);
    calcolaMedie(voti, N_STUDENTI, N_VOTI, medie);
    stampaMedie(medie, N_STUDENTI);
}
void riempiMatrice(float _voti[][N_VOTI], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Studente %d, voto %d", i+1, j+1);
            scanf("%f", &_voti[i][j]);
        }
    }
}
void stampaMatrice(float _voti[][N_VOTI], int r, int c){
    for(int i=0; i<r; i++){
        printf("Voti studente %d: ", i+1);
        for(int j=0; j<c; j++){
            printf("\t%.2f", _voti[i][j]);
        }
        printf("\n");
    }
}
void calcolaMedie(float _voti[][N_VOTI], int r, int c, float _medie[]){
    float somma;
    for(int i=0; i<r; i++){
        somma = 0;
        for(int j=0; j<c; j++){
            somma+=_voti[i][j];
        }
        _medie[i] = somma/c;
    }
}
void stampaMedie(float _medie[], int s){
    for(int i=0; i<s; i++){
        printf("Media studente %d: %f\n", i+1, _medie[i]);
    }
}