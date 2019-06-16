#include <stdio.h>

int main(){

    int i,n;
    scanf("%d",&n);
    if(n%2==0){
      n = n+1;
    }
    for(i=0;i<6;i++){
        if(n%2!=0){
            printf("%d\n",n);
            n =n+2;
        }
    }
return 0;
}
