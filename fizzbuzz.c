#include <stdio.h>

int main(){
    int i, par3,par7;
    for (i=1;i<=100;i++){
        par3=(i%3==0 || i%10==3); // Vérifie si i multiple de 3 ou fini par 3
        par7=(i%7==0 || i%10==7); // Vérifie si i multiple de 7 ou fini par 7

        if(par3 && par7)
            printf("fizzbuzz\t");
        else if (par3)
            printf("fizz\t");
        else if (par7)
            printf("buzz\t");
        else
            printf("%d\t",i);
    }
    return 0;
}
