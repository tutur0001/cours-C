#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
//    calcul simple
//    int resultat = 0;
//    resultat = 5 + 3;
//    printf("5 + 3 = %d\n", resultat);

//    calcul entre variable
    int resultat = 0, var1 = 0, var2 = 0;
    
    printf("Veuillez saisir un nombre a additionner: ");
    scanf("%d", &var1);
    printf("Veuillez saisir l'autre nombre a additionner: ");
    scanf("%d", &var2);
    resultat = var1 + var2;
    printf("%d + %d = %d\n", var1, var2, resultat);
    
    return 0;
    
}
    
