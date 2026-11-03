#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1 = 0 ;
    int nombre2 = 0 ;
    printf("Entrez un nombre : ") ;
    scanf("%d", &nombre1) ; 
    printf("Entrez un nombre2 : ") ;
    scanf("%d", &nombre2) ;
    int resultat = nombre1 * nombre2 ;
    printf("Resultat est %d", resultat) ;
    return 0 ;
}
