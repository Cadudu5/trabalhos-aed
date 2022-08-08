#include<iostream>
#include "orderedList.h"


using namespace std;

orderedList px;
orderedList qx;
orderedList sx;


int main(){
 
    int menu;

    cout << "\n\t>>>>> Bem vindo! <<<<< \n" << endl;

    cout << "Nesse programa, iremos lidar com polinomios!\n" << endl;
    cout << "> Selecione uma opcao: " << endl;
    cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
    cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;

    cin >> menu;

    while (menu != 7)
    {
        switch(menu)
        {
        case 1:{
            ListEntry entrada;
            int escolha;
            cout << "1- Adicionar um termo. \n2- Remover um termo." << endl;
            cin >> escolha;
          
            if(escolha == 1){
            cout << "Insira um termo para o polinomio P(x)!" << endl;
            cout << "Expoente: X^";
            cin >> entrada.expoente;
            cout << "insira um coeficiente para este termo:" << endl;
            cout << "P(x) = X^" << entrada.expoente << ": ";
            cin >> entrada.coeficiente;

            px.insert(entrada); 

            cout << "Termo inserido com sucesso!" << endl;

            cout << "\n> Selecione uma opcao: " << endl;
            cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
            cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
            cin >> menu;
            } else if (escolha == 2){
                 ListEntry remover;
                 cout << "P(x) = ";
                 px.list();
                 cout << "Digite o expoente do termo que deseja remover: ";
                 cin >> remover.expoente;

                 px.remove(remover);
                 cout << "Termo removido com sucesso!" << endl;

                cout << "\n> Selecione uma opcao: " << endl;
                cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
                cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
                cin >> menu;


            } else {
                cout << " >>> Comando invalido! " << endl;
                cout << "\n> Selecione uma opcao: " << endl;
                cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
                cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
                cin >> menu;
            }
            

            break;
            } 
        case 2:{
            ListEntry entrada;
            int escolha;
            cout << "1- Adicionar um termo. \n2- Remover um termo." << endl;
            cin >> escolha;
          
            if(escolha == 1){
            cout << "Insira um termo para o polinomio Q(x)!" << endl;
            cout << "Expoente: X^";
            cin >> entrada.expoente;
            cout << "insira um coeficiente para este termo:" << endl;
            cout << "Q(x) = X^" << entrada.expoente << ": ";
            cin >> entrada.coeficiente;

            qx.insert(entrada); 

            cout << "Termo inserido com sucesso!" << endl;

            cout << "\n> Selecione uma opcao: " << endl;
            cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
            cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
            cin >> menu;
            } else if (escolha == 2){
                 ListEntry remover;
                 cout << "Q(x) = ";
                 qx.list();
                 cout << "Digite o expoente do termo que deseja remover: ";
                 cin >> remover.expoente;

                 qx.remove(remover);
                 cout << "Termo removido com sucesso!" << endl;

                cout << "\n> Selecione uma opcao: " << endl;
                cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
                cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
                cin >> menu;


            } else {
                cout << " >>> Comando invalido! " << endl;
                cout << "\n> Selecione uma opcao: " << endl;
                cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
                cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
                cin >> menu;
            }
            

            break;
        }

        case 3:{
            px.obtergrau();
            qx.obtergrau();
                cout << "\n> Selecione uma opcao: " << endl;
                cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
                cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
                cin >> menu;


            break;
        }
        
        case 4:{
            cout << "P(x) = ";
            px.list();
            cout <<"\nQ(x) = ";
            qx.list();
            cout << "\n> Selecione uma opcao: " << endl;
            cout << "1- Entrar ou modificar o polinomio P(x).\n2- Entrar ou modificar o polinomio Q(x). \n3- Retornar o grau dos polinomios P(x) e Q(x). " << endl;
            cout <<"4- Imprimir os polinomios P(x) e Q(x) \n5- Somar P(x) + Q(x) e obter um novo polinomio. \n6- Multiplicar P(x) * Q(x) e obter um novo polinomio. \n7- Sair. \n" << endl;
            cin >> menu;
            break;
        }

        case 5:{
            
            
        }

        default:
            cout << "comando invalido!" << endl;
            break;
        }
    }

    cout << "\nPrograma finalizado com sucesso!" << endl;
    return 0;

}