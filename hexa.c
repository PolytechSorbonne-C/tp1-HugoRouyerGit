#include <stdio.h>
#include <math.h>
int main(){
    int decimal,valide,val;
    char hexa;

    valide=1;
    decimal=0;
    while (valide){
    printf("Saisie du prochain caractere :");
    scanf("%c",&hexa);
    getchar();
    if (hexa>='a' && hexa<='f'){
        val = hexa-'a'+10;
        decimal = decimal*16 + val;
    }
    else if (hexa>='A' && hexa<='F'){
        val = hexa-'A'+10;
        decimal = decimal*16 + val;
    }
    else if (hexa>='0' && hexa<='9'){
        val = hexa-'9'+9;
        decimal = decimal*16 + val;
    }
    else
        valide=0;


    }
    printf("%d",decimal);



    return 0;
}
