#include <stdio.h>

int main(){
    int i,x,y,soma,aux;
    soma = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    y = y +1;
    for(i = y;i < x; i++){
        if(i%2!=0){
            soma += i;
        }
        if(i == x){
            break;
        }
    }
    printf("%d\n",soma);
return 0;
}
