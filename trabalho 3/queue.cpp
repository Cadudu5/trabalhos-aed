// Carlos Eduardo Rodrigues Dos Santos
// Nº USP: 12716863
// ATIVIDADE 3 - Filas

#include<iostream>
#include "queue.h"

using namespace std;

queue::queue()
{
   counter = 0;
   head = tail = NULL;
}

queue::~queue()
{ queuePointer p;

 while(head != NULL)
 { p = head;
 head = head->nextNode;
 delete p;
 }
}

void queue::append(queueEntry item)
{ 
 queuePointer p;
 p = new queueNode;
 if(p == NULL)
 {
    cout << "Memoria insuficiente" << endl;
    abort();
 }
 p->Entry = item;
 if (empty())
 head = tail = p;
 else
 { 
    tail->nextNode = p;
    tail = p;
 }
 p->nextNode = NULL;

 counter++;
}


queueEntry queue::serve()
{ queuePointer p;
 if (empty())
 { 
    cout << "Fila Vazia";
    abort();
 }
 p = head;
 head = head->nextNode;
 queueEntry served = p->Entry;
 delete p;

 if (head == NULL)
 tail = NULL;

counter--;
 return served;
}

bool queue::full()
{
 return (counter == 100);
}

bool queue::empty() {
    return (head == NULL);
}

int queue::size(){
   return counter;
}

void queue::list(){

   queuePointer p = head;
   if(p == NULL){
      cout << "Ainda nao existem cadastros para este periodo!" << endl;
      abort();
   }
   for (int i = 0; i < counter; i++){
      cout << "\n---------------------------------------------\n" << endl;
      cout << "Nome do paciente: " << p->Entry.nome << endl;
      cout << "Endereco: " << p->Entry.endereco << endl;
      cout << "CPF: " << p->Entry.cpf << endl;
      cout << "Idade: " << p->Entry.idade << endl;
      cout << "\n---------------------------------------------\n" << endl;
      p = p->nextNode;
   }
}





