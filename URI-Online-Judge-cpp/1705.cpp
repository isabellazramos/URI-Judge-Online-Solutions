#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int numeroDigitos(int n){
    unsigned int number_of_digits = 0;
    do {
        ++number_of_digits; 
        n /= 10;
    } while (n);
    return number_of_digits;
}

int verifica(int x){

    int n = numeroDigitos(x);

    int array[n];
    int number = x;
    for (int i = 0; i < n; i++) {
        array[i] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < n; i++)
    {
        if(array[i] > 1){
            return -1;
        }
    }
    return 1;

}

int main(){

    int number,i,res;
    while(cin >> number){
    res = 0;
    i = number;
    res = number;
    while (number != 0)
    {
     if(verifica(res) == 1){
        break;
     }
     res+= number;
    }
    if(res <= -1){
        cout << -1 << endl;
    }else{
        cout << res << endl;
    }
}}
