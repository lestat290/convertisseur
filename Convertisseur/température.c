#include <stdio.h>
#include <stdlib.h>

int main(){
            char choix;
            float cel, fah;
            printf("La temperature a convertir est elle exprimee en degres celsius (c) ou fahrenheit (f) ?\n");
            fflush(stdin);
            scanf("%c", &choix);
            switch (choix) {

            case 'c' :
                printf("Saisissez la temperature en degres celsius.\n");
                fflush(stdin);
                scanf("%f", &cel);
                fah=(cel)*(9/5)+32;
                printf("La temperature saisie correspond a %f degres fahrenheit.\n", fah);
                break;
            case 'f' :
                printf("Saisissez la temperature en degres fahrenheit.\n");
                fflush(stdin);
                scanf("%f", &fah);
                cel=(fah-32)*(9/5);
                printf("La temperature saisie correspond a %f degres celsius.\n", cel);
                break;
            default :
                printf("Erreur.");
                break;
                            }
return 0;
}
