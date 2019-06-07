#include <stdio.h>

int main() {
    int cont,i;
    double res;
    i=0;
    cont=0;
    while (i!=6){
        scanf("%lf",&res);
        if(res>0){
            cont+=1;
        }
        i++;
    }
    printf("%d valores positivos\n",cont);
    return 0;
}
