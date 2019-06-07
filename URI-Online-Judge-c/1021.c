#include<stdio.h>

int main(){

    int n100,n50,n20,n10,n5,n2,m1,m05,m025,m010,m005,m001;
    double total;

    scanf("%lf",&total);
    n100 = total/100.0;
    total = fmod(total,100);
    n50 = total /50.0;
    total = fmod(total,50);
    n20 = total /20.0;
    total = fmod(total,20);
    n10 = total /10.0;
    total = fmod(total,10);
    n5 = total /5.0;
    total = fmod(total,5);
    n2 = total /2.0;
    total = fmod(total,2);
    m1 = total /1.0;
    total = fmod(total,1);
    m05= total /0.5;
    total = fmod(total,0.5);
    m025 = total /0.25;
    total = fmod(total,0.25);
    m010 = total /0.10;
    total = fmod(total,0.10);
    m005 = total /0.05;
    total = fmod(total,0.05);
    m001 = ceil(total);


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m05);
    printf("%d moeda(s) de R$ 0.25\n",m025);
    printf("%d moeda(s) de R$ 0.10\n",m010);
    printf("%d moeda(s) de R$ 0.05\n",m005);
    printf("%d moeda(s) de R$ 0.01\n",m001);
return 0;
}
