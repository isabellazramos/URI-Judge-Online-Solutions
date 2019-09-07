#include <math.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    double a,b,c, delta,x1,x2;
    cin >> a >> b >>c;
    
    delta = sqrt(b*b - 4*a*c);
    if(delta >= 0 && a!=0){
        x1=(-1*b + delta)/(2*a);
        x2=(-1*b - delta)/(2*a);
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    }else{
        cout << "Impossivel calcular" << endl;
    }
    
    return 0;
}
