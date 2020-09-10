#include <stdio.h>
#include <iostream>

using namespace std;

int main (){

    int n = 0;
    int h = 0;
    int cont = 0;
    cin >> n;
    cin >> h;

    int vet[n];

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }

    for(int i=0; i<n; i++){
        if(vet[i] > h){
            cont += 2;
        }
        else{
            cont += 1;
        }
    }

    cout << cont << endl; 


    
}
