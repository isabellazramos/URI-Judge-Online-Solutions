#include <stdio.h>

int main(){
    float soma=0;
    int linha;
    int i=0;
    int j=0;
    char letra;
    float a[2][2];
    scanf("%d %c",&linha,&letra);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%f",&a[i][j]);
        }

    }
    for(j=0;j<2;j++){
         soma+=a[linha][j];
    }
        if (letra=='S'){
            printf("%f",soma);
        }
         else if(letra=='M'){
            printf("%f",soma/2);
            }


    return 0;
}
