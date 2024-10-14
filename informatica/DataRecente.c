/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024*/

#include <stdio.h>

int main(){
    int giornoA=0;
    int meseA=0;
    int annoA=0;
    int giornoB=0;
    int meseB=0;
    int annoB=0;
    int bisestile=0;

    printf("\ninserisci la prima data");
    scanf("%d", &giornoA);
    scanf("%d", &meseA);
    scanf("%d", &annoA);
    printf("\ninserisci la seconda data");
    scanf("%d", &giornoB);
    scanf("%d", &meseB);
    scanf("%d", &annoB);

    //controllo prima data
    if(annoA%100==0){
        if (annoA%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if (annoA%4==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    if (meseA>=1 && meseA<=12){
        if (meseA==2){
            if(giornoA>=1 && giornoA<=28+bisestile){
                printf("\nLa prima data è accettabile");
            }
            else{
                printf("\nLa prima data non è accettabile");
            }
        }
        else{
            if( meseA==11 || meseA==4 || meseA==6 || meseA==9){
                if (giornoA>=1 && giornoA<=30){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa prima data non è accettabile");
                }
            }
            else{
                if (giornoA>=1 && giornoA<=31){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa prima data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa prima data non è accettabile");
    }

    //controllo seconda data
    if(annoB%100==0){
        if (annoB%400==0){
            printf("\nL'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if (annoB%4==0){
            printf("\nL'anno è bisestile");
            bisestile=1;
        }
    }
    if (meseB>=1 && meseB<=12){
        if (meseB==2){
            if(giornoB>=1 && giornoB<=28+bisestile){
                printf("\nLa seconda data è accettabile");
            }
            else{
                printf("\nLa seconda data non è accettabile");
            }
        }
        else{
            if( meseB==11 || meseB==4 || meseB==6 || meseB==9){
                if (giornoB>=1 && giornoB<=30){
                    printf("\nLa seconda data è accettabile");
                }
                else{
                    printf("\nLa seconda data non è accettabile");
                }
            }
            else{
                if (giornoB>=1 && giornoB<=31){
                    printf("\nLa seconda data è accettabile");
                }
                else{
                    printf("\nLa seconda data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa seconda data non è accettabile");
    }
    if(annoA>annoB){
        printf("la prima data è recente");
    }
    else{
        if(annoB>annoA){
            printf("la seconda è più recente");
        }
        else{
            if(meseA>meseB){
                printf("la prima data è recente");
            }
            else{
                if(meseB>meseA){
                    printf("la seconda è più recente");
                }
                else{
                    if(giornoA>giornoB){
                        printf("la prima data è recente");
                    }
                    else{
                        if(giornoB>giornoA){
                            printf("la seconda è più recente");
                        }
                        else{
                            printf("le date sno uguali");
                        }
                    }      
                }   
            }
         
        }
    }
    return 0;
}