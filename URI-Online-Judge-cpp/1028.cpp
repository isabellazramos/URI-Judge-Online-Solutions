#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int mdc(int x, int y){
    int resto;
    do{
        resto = x%y;
        x = y;
        y = resto;
    } while(resto != 0);
    return x;
}


int main(){
    int n,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       cin >> a >> b;
       cout << mdc(a,b) << endl;
    }
     
}
