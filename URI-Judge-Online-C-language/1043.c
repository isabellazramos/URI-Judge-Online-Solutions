#include <stdio.h>
#include <math.h>
int main(){

    float a, b ,c, trapezio,triangulo;
    scanf("%f %f %f",&a,&b,&c);
    if(((fabs(b-c))<a)&&(a<(b+c))){
        triangulo = a+b+c;
        printf("Perimetro = %.1f\n", triangulo);
    }
    else if(((fabs(a-c))<b)&&(b<(a+c))){
        triangulo = a+b+c;
        printf("Perimetro = %.1f\n", triangulo);
    }
    else if(((fabs(a-b))<c)&&(c<(a+b))){
        triangulo = a+b+c;
        printf("Perimetro = %.1f\n", triangulo);
    }
    else{
        trapezio = ((a+b)*c)/2;
        printf("Area = %.1f\n", trapezio);
    }

return 0;
}
