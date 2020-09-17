#include <stdio.h>

int main(){
    int x,k,resultat;

    printf("saisie du nombre : ");
    scanf("%d",&x);
    resultat=1;
    printf("saisie de la puissance : ");
    scanf("%d",&k);

    for (int i=0;i<k;i++)
        resultat*=x; //On multiplie la valeur actuel du resultat par x

    printf("Valeur de %d a la puissance %d : %d",x,k,resultat);

    // reponse du 3 dans puiss2

}
