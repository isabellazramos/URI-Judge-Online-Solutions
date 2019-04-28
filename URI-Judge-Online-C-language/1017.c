#include<stdio.h>

int main(){
int tempogasto,velocidademedia;
double litrosviagem;
scanf("%d %d",&tempogasto,&velocidademedia);
litrosviagem = ((tempogasto/12.0)*velocidademedia);
printf("%.3lf\n",litrosviagem);
return 0;
}
