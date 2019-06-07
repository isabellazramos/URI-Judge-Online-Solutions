#include <stdio.h>

int main(){
    int i,j;
    double v[3],a,b,c, aux;

    for(i = 0; i < 3; i++){
        scanf("%lf",&v[i]);
        if(v[i]<0){
            break;
        }
    }

    for(i = 0; i < 3; i++){
        for (j = i + 1; j < 3; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    c = v[0];
    b = v[1];
    a = v[2];
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((a*a)==(b*b+c*c)){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a)>(b*b+c*c)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a)<(b*b+c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((a == b)&&(b == c)){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(((a == b) &&(b !=c)) || ((a == c)&& (c!=b)) || (c == b)&&(b!=a)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
return 0;

}
