#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;


bool primos(int num){
    int aux;
    bool primos = true;
    
    if((num % num == 0)&&(num % 1 == 0)){
        for(int i=2; i<sqrt(num); i++){
            if(num % i == 0){
                primos = false;
                return primos;
            }
        }
    }
       return primos;
}
int main(){
    int n,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(primos(a) == true){
            cout << "Prime" << endl;
        }else{
            cout << "Not Prime" << endl;
        }
    }
}
