#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int size, A = 0, D = 0;
    cin >> size;
    char vet[size];

    for(int i=0; i<size;i++){
        cin >> vet[i];
    }
    for(int i=0; i<size;i++){
        if(vet[i] == 'D'){
            D++;
        }else{
            A++;
        }
    }

    if(A>D){
        cout << "Anton" << endl;
    }else if(D>A){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
}