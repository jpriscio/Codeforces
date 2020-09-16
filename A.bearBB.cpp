#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int a = 0, b = 0, cont = 0;
    cin >> a;
    cin >> b;

    while(a <= b){

        cont++;

        a = a * 3;
        b = b * 2;
    }

    cout << cont << endl;
    
}