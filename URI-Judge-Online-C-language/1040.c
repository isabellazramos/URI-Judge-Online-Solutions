#include<stdio.h>
int main(){
    double n1,n2,n3,n4,media1,media2,media3;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media1 = (2*n1+3*n2+4*n3+1*n4)/(2+3+4+1);
    if(media1>=7.0){
        printf("Media: %.1lf",media1);
        printf("Aluno aprovado.\n");
    }
    else if(media1<5.0){
        printf("Media: %.1lf",media1);
        printf("Aluno reprovado.\n");
    }
    else if((media1>=5.0)&&(media1<=6.9)){
        printf("Media: %.1lf\n",media1);
        printf("Aluno em exame.\n");
        printf("Nota do exame: \n");scanf("%lf",&media2);
        media3=(media1+media2);
        media3=media3/2.0;
        if(media3>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",media3);
        }
        else if(media3<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",media3);
        }
    }
return 0;
}
