#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int p,n;
    float x,y;

    for (n=1;n<=10000000;n++){
        x =(float)(rand())/(RAND_MAX/2)-1;// Assigne une valeur à x entre -1 et 1
        y=(float)(rand())/(RAND_MAX/2)-1;// Assigne une valeur à y entre -1 et 1
        if ((x*x+y*y)<=1.0) // vérifie si le point (x,y) se situe dans le cercle de rayon 1 et de centre 0
            p+=1;
    }
    printf("Approximation de pi: %f",(float)(4*p)/n);
    return 0;
}
