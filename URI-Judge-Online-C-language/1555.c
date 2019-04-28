#include <stdio.h>
#include <math.h>

int rafael(int x,int y){
    int rafael1;
    rafael1 = pow(3*x,2)+pow(y,2);
    return rafael1;
}

int beto(int x, int y){
    int beto1;
    beto1 = 2*(pow(x,2))+(pow(5*y,2));
    return beto1;
}

int carlos(int x, int y){
    int carlos1;
    carlos1=(-100*x)+pow(y,3);
    return carlos1;
}

int main(){

int n,x,y,i;

scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d %d",&x,&y);
    if ((rafael(x,y)>beto(x,y))&&(rafael(x,y)>carlos(x,y))){
        printf("Rafael ganhou\n");
    }
    else if((beto(x,y)>rafael(x,y))&&(beto(x,y)>carlos(x,y))){
        printf("Beto ganhou\n");
    }
    else if((carlos(x,y)>rafael(x,y))&&(carlos(x,y)>beto(x,y))){
        printf("Carlos ganhou\n");
    }
}


return 0;
}
