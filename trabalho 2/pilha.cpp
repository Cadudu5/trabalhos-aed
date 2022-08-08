// Carlos Eduardo Rodrigues Dos Santos Nro 12716863 //
#include<iostream>
#include<cstring>
#include "pilha.h"
using namespace std;

// Inicializa o top vazio // 
pilha::pilha(){
    top = 0;
}

void pilha::push(char word[]){
    // verifica se a pilha esta cheia // 
    if(full()){
        cout << "Pilha cheia" << endl;
        abort();
    } else{
        // verifica o tamanho da palavra digitada // 
        int len = strlen(word);
        // inserindo caracteres no vetor da pilha // 
            for(int i = 0; i < len; i++){
                Pilha[top] = word[i];
                top++;
            }
        
        }
    }

void pilha::pop(){
    // verifica se a pilha esta vazia // 
    if(empty()){
        cout << "Pilha vazia";
        abort();
    } else{
        // retira uma copia dos caracteres do topo da pilha // 
        for(int i = top; i >= 0; i--){
            cout << Pilha[top];
            top --;

        }
    }
}

bool pilha::empty(){
    return(top == 0);
}

bool pilha:: full(){
    return(top == max_stack);
}