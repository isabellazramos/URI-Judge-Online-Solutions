#include <stdio.h>

int main() {
    int n,resp,i,in,out;
    in=0;
    out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&resp);
        if((resp>=10)&&(resp<=20)){
            in+=1;
        }
        else{
            out+=1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
