#include <stdio.h>

int main(){
    int choix_1;
    int choix_2;
    int sous_choix;
    printf("choisi quelque chose:\n1 -> pomme\n2 -> orange\n");
    scanf("%i", &choix_1);
    getchar();

    if(choix_1 == 1){
        printf("pomme pomme pomme pomme pomme!");
        printf("choisi :\n1 -> banane\2 -> citron");
        scanf("%i", &sous_choix);
        getchar();

        if(sous_choix == 1){printf("banane banane banane!");}else if(sous_choix == 2){printf("citron citron citron");}else{printf("error");}
    }else if( choix_2 == 2){
        printf("orange orange orange orange!");
    }else{printf("error!");}
    return 0;
}