#include <stdio.h>

main(){
char nome;
double salario,montante;

scanf("%s",&nome);
scanf("%lf",&salario);
scanf("%lf",&montante);
salario=salario+montante*0.15;

printf("TOTAL = R$ %.2f\n",salario);

return 0;
}
