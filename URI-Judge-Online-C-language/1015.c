#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
double x1,x2,y1,y2,total,totalx,totaly;

scanf("%lf %lf",&x1,&y1);
scanf("%lf %lf",&x2,&y2);
printf("%.4lf\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
return 0;

}
