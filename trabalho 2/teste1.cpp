// Carlos Eduardo Rodrigues Dos Santos Nro 12716863//
#include<iostream>
#include<string>
#include "pilha.h"
using namespace std;

int main(){
    // instancia do tipo pilha //
    pilha teste1;
    char palavra[50];
 
    cout << "Digite uma palavra: ";
    cin >> palavra;
 
    teste1.push(palavra);
    teste1.pop();


}