#include <stdio.h>

int main()
{
    double salario, reajuste, nsalario;
    char ch = '%';
    int d;
    scanf("%lf",&salario);
    if (salario>=0 && salario <= 400.00){
        reajuste = salario*.15;
        d = 15;
        nsalario = salario + reajuste;
    }
    else if (salario >= 400.01 && salario <= 800){
        reajuste = salario*.12;
        d=12;
        nsalario = salario + reajuste;
    }
    else if (salario >= 800.01 && salario <= 1200){
        reajuste = salario*.10;
        d=10;
        nsalario = salario + reajuste;
    }
    else if (salario >= 1200.01 && salario <= 2000){
        reajuste = salario*.07;
        d=7;
        nsalario = salario + reajuste;
    }
    else if (salario > 2000){
        reajuste = salario*.04;
        d=4;
        nsalario = salario + reajuste;
    }
    printf("Novo salario: %.2lf\n",nsalario);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: %d %c\n",d,ch);
    return 0;
}
