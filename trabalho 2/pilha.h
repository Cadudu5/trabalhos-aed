// Carlos Eduardo Rodrigues Dos Santos Nro 12716863 //
#include<iostream>
using namespace std;

#ifndef PILHA_H
#define PILHA_H

class pilha
{public:
    pilha();
    void push(char word[]);
    void pop();
    bool full();
    bool empty();

private:
    static const int max_stack = 50;
    char Pilha[max_stack + 1];
    int top;
    
};

#endif