// Carlos Eduardo Rodrigues Dos Santos
// Nº USP: 12716863
// ATIVIDADE 3 - Filas

#include<iostream>
using namespace std;


struct queueEntry
{
    string nome;
    string endereco;
    string cpf;
    int idade;
};


class queue{
    public:

    queue();
    ~queue();
    void append(queueEntry item);
    queueEntry serve();
    void list();
    int size();
    bool empty();
    bool full();

    private:

    struct queueNode;

    typedef queueNode (* queuePointer);

    struct queueNode
    {
        queueEntry Entry;
        queuePointer nextNode;
    };
    
    queuePointer head, tail;

    int max_size = 100;
    int counter;
};