#include <stdio.h>

int main(){
    int numerateur,denominateur,numMoins,buffer;
    printf("Numerateur :");
    scanf("%d",&numerateur);
    printf("Denominateur : ");
    scanf("%d",&denominateur);
    printf("Decomposition de %d/%d : ",numerateur,denominateur);

    while (numerateur>1 && denominateur>0){
            if (denominateur%numerateur==0){
                printf("1/%d",denominateur/numerateur);
                numerateur=1;
            }
            else{
                buffer = (denominateur/numerateur)+1;
                printf("1/%d + ",buffer);

                if (denominateur%buffer==0){
                    numerateur-= denominateur/buffer;
                    buffer= buffer*(denominateur/buffer);
                    if (numerateur==1)
                        printf("1/%d",denominateur);
                }
                else{
                        numerateur= (numerateur*buffer)-denominateur;
                        denominateur=denominateur*buffer;
                        if (numerateur==1)
                            printf(" 1/%d",denominateur);
                }
            }
    }

}
