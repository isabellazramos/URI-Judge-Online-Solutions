#include <stdio.h>
#include<math.h>
main(){
double raio,pi,esfera;
scanf("%lf",&raio);
pi=3.14159;
esfera= (4/3.0)*pi*pow(raio,3);

printf("VOLUME = %.3lf\n",esfera);

return 0;
}
