#include <stdio.h>
#include <math.h>
int main(){
    int decimal,valide,puissance;
    char hexa;

    valide = 1;
    decimal=-1;
    puissance=0;

    while (valide){
        printf("Saisie du prochain caractere :");
        scanf("%c",&hexa);
        getchar();
        switch (hexa){
            case '0' : decimal+=0; break;
            case '1' : decimal+=1*pow(16,puissance); break;
            case '2' : decimal+=2*pow(16,puissance); break;
            case '3' : decimal+=3*pow(16,puissance); break;
            case '4' : decimal+=4*pow(16,puissance); break;
            case '5' : decimal+=5*pow(16,puissance); break;
            case '6' : decimal+=6*pow(16,puissance); break;
            case '7' : decimal+=7*pow(16,puissance); break;
            case '8' : decimal+=8*pow(16,puissance); break;
            case '9' : decimal+=9*pow(16,puissance); break;
            case 'A' : decimal+=10*pow(16,puissance); break;
            case 'B' : decimal+=11*pow(16,puissance); break;
            case 'C' : decimal+=12*pow(16,puissance); break;
            case 'D' : decimal+=13*pow(16,puissance); break;
            case 'E' : decimal+=14*pow(16,puissance); break;
            case 'F' : decimal+=15*pow(16,puissance);
            default: valide=0;
        }
        puissance+=1;
    }

    if (decimal!=-1)
        printf("Valeur décimale : %d",decimal+1);
    else
        printf("Nombre Hexa non valide");

    return 0;
}
