#include<iostream>
#include "orderedList.h"
using namespace std;

orderedList::orderedList(){
    sentinel = new ListNode;
    head = sentinel;
    count = 0;
}

orderedList::~orderedList(){
     ListPointer q;
    while (head != sentinel)
        { q = head;
          head = head->nextNode;
          delete q;
        }
    delete sentinel;

}

bool orderedList::empty()
{
 return (head == sentinel);
}

bool orderedList::full()
{
 return false;
}

void orderedList::insert(ListEntry x){
     ListPointer p, q;
 // Buscar local de inserção
    sentinel->entry = x;

    p = head;
    if(sentinel->entry.expoente == p->entry.expoente){
        p->entry.coeficiente += sentinel->entry.coeficiente;

    }

    while(p->entry.expoente > x.expoente) // modificado para inserir na ordem decrescente
    p = p->nextNode;
    q = new ListNode;
    if(q == NULL)
    { cout << "Memoria insuficiente";
    abort();
    }
    if(p == sentinel)
    { p->nextNode = q;
    sentinel = q;
    }   else
            { *q = *p;
            p->entry = x;
            p->nextNode = q;
                
            }
    count++;
}

void orderedList::remove(ListEntry x){

     ListPointer p=NULL, q=head;

    // Buscar local de remoção
    sentinel->entry = x;
    while(q->entry.expoente > x.expoente)
    { p = q;
    q = q->nextNode;
    }

    // Encontrou x?
    if (q->entry.expoente != x.expoente || q == sentinel)
    return; // não encontrou

    // Local de remoção
    if(q == head) // início
    head = q->nextNode;
    else // demais posições
    p->nextNode = q->nextNode;
    delete q;
    count = count - 1;
}

    int orderedList::search(ListEntry x){
    int posicao=1;
    ListPointer q=head;
    sentinel->entry = x;
    while (q->entry.expoente < x.expoente)
    { q = q->nextNode;
    posicao++;
    }
    if (q->entry.expoente != x.expoente || q == sentinel)
    return 0;
    else
    return posicao;
}

void orderedList::list(){

    ListPointer p = head;
    
    if (p == NULL){
        cout << "Polinomio vazio" << endl;
        abort();
    }
    

    for (int i = 0; i < count; i++){
    
     
       cout << p->entry.coeficiente << "X^" << p->entry.expoente << " "; 
       p = p->nextNode;
   }

}

void orderedList::obtergrau(){

    if (head == NULL){
        cout << "Polinomio vazio" << endl;
    }

    cout << "Grau: " << head->entry.expoente << endl;
}
