#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
int t,i,pa,pb,ano;
double g1,g2;
scanf("%d",&t);
for(i=0;i<t;i++){
  scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
  g1=g1*0.01;
  g2=g2*0.01;
  ano=0;
  while((pa<pb)||(pa==pb)){
    pa=pa+(pa*g1);
    pb=pb+(pb*g2);
    ano=ano+1;
    if (ano>100){
            break;
    }}
    if((ano<100)||(ano==100)){
        printf("%d anos.\n",ano);
    }
    else{
        printf("Mais de 1 seculo.\n");
    }
  }


return 0;
}
