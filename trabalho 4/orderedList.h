#include<iostream>
using namespace std;

struct ListEntry
{
    int expoente;
    int coeficiente;
};


class orderedList
{
    public:
        orderedList();
        ~orderedList();
        void insert(ListEntry x);
        void remove(ListEntry x);
        int  search(ListEntry x);
        void obtergrau();
        void list();
        bool empty();
        bool full();

    private:
        // foward declaration
        struct ListNode;

        typedef ListNode (* ListPointer);

        struct ListNode
        {
            ListEntry entry;       // tipo de dado colocado na lista
            ListPointer nextNode; // ligação para próximo elemento na lista
        };
        
        // declaracao de campos
        ListPointer head, sentinel;     //inicio da lista e sentinela
        int count;                     // contador
};