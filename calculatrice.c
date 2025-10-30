#include <stdio.h>

int main(void) {
    int nb_1, nb_2;
    char signe;
    // Entrée du calcul
    printf("Calculatrice\n");
    printf("Entrée votre calcul : ");
    scanf("%d%c%d",&nb_1,&signe,&nb_2);

    // Calculs
    /*
    if (signe=='+') {
        printf("%d + %d = %d \n",nb_1,nb_2,nb_1+nb_2);
    } else if (signe=='-') {
        printf("%d - %d = %d \n",nb_1,nb_2,nb_1-nb_2);
    } else if (signe=='x' || signe=='*') {
        printf("%d x %d = %d \n",nb_1,nb_2,nb_1*nb_2);
    } else if (signe=='/') {
        printf("%d / %d = %d \n",nb_1,nb_2,nb_1/nb_2);
    } else printf("ERROR \n");
    */
    ///*
    // Menu du calcul
    switch (signe) {
        case '+':
            printf("%d + %d = %d \n",nb_1,nb_2,nb_1+nb_2);
            break;
        case '-':
            printf("%d - %d = %d \n",nb_1,nb_2,nb_1-nb_2);
            break;
        case 'x':
            printf("%d x %d = %d \n",nb_1,nb_2,nb_1*nb_2);
            break;
        case '/':
            printf("%d / %d = %d \n",nb_1,nb_2,nb_1/nb_2);
            break;
        default:
            printf("Error\n");
    }
    //*/
    return 0;
}