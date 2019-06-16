#include <stdio.h>

int main(){

    int i,n,n_p;
    n_p=0;
    for(i = 0; i < 5; i++){
        scanf("%d",&n);
        if(n%2==0){
            n_p++;
        }
    }
    printf("%d valores pares\n",n_p);
return 0;
}
