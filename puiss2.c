#include <stdio.h>

int main(){
    int x,k,resultat;

    printf("saisie du nombre : ");
    scanf("%d",&x);
    resultat=1;
    printf("saisie de la puissance : ");
    scanf("%d",&k);
    printf("resutat de %d a la puissance %d :",x,k);

    while ( k!=0){
        if (k%2==1){
            resultat*=x;
        }
        x=x*x;
        k= k/2;
        printf("%d",k);

    }

    printf(" %d",resultat);

    /* 3) (Pour k=18) Dans la boucle de puiss1, on fait 18 tours, et 5 dans le cas de puiss2
          (pour k quelconque) Dans la boucle de puiss1, on passera k fois dans la boucle, dans puiss2, on passera log2(k) fois dans la boucle */
}
