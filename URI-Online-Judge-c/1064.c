#include <stdio.h>

int main() {
    int cont,i;
    double res,sum;
    i=0;
    cont=0;
    sum=0;
    while (i!=6){
        scanf("%lf",&res);
        if(res>0){
            cont+=1;
            sum+=res;
        }
        i++;
    }
    printf("%d valores positivos\n",cont);
    printf("%.1lf\n",sum/cont);
    return 0;
}
