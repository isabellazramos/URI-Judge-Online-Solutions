#include <stdio.h>

main(){
int num,horas;
float salario,total;

scanf("%d",&num);
scanf("%d",&horas);
scanf("%f",&salario);
total=horas*salario;

printf("NUMBER = %d\n",num);
printf("SALARY = U$ %.2f\n",total);

return 0;
}
