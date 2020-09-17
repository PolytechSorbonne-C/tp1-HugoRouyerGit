#include <stdio.h>

int main(){
    int x,k,resultat;

    printf("saisie du nombre : ");
    scanf("%d",&x);
    resultat=1;
    printf("saisie de la puissance : ");
    scanf("%d",&k);

    for (int i=0;i<k/2;i++)
        resultat*= x*x; // On multiplie par le carre de x pour chaque iteration

    if (k%2==1)
        resultat*=x; //On multiplie une fois de plus si la puissance est impaire

    printf("Valeur de %d a la puissance %d : %d",x,k,resultat);

    /* 3) (Pour k=18) Dans la boucle de puiss1, on fait 18 tours, et 9 dans le cas de puiss2
          (pour k quelconque) Dans la boucle de puiss1, on passera k fois dans la boucle, dans puiss2, on passera k/2 fois dans la boucle */
}
