#include <stdio.h>
#include <stdlib.h>
int main() {

   double x,y;
   scanf("%lf %lf",&x,&y);

    if(x == 0.0){
        if(y == 0.0){
            printf("Origem\n");
        }
        else{
            printf("Eixo Y\n");
        }
    }
    else if(x != 0.0 && y==0.0){
    printf("Eixo X\n");
   }
    else if(x > 0){
        if(y > 0){
            printf("Q1\n");
        }
        else{
            printf("Q4\n");
        }
   }
   else if(x < 0.0){
        if(y>0.0){
            printf("Q2\n");
        }
        if(y<0.0){
            printf("Q3\n");
        }
   }

    return 0;
}
