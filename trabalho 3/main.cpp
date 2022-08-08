// Carlos Eduardo Rodrigues Dos Santos
// Nº USP: 12716863
// ATIVIDADE 3 - Filas

#include<iostream>
#include<limits>
#include<iomanip>
#include "queue.h"

using namespace std;

struct Slot
    {
        queue fila;
        int dia; // 0-segunda 1-terça 2-quarta 3-quinta 4-sexta
        int horario; // 0-manhã 1-tarde
    };

void inicializarSlots(Slot *slots);
string diaEmString(int DiaEmNum);
string horarioEmString(int HoraEmNum);


Slot slots[10];

int main(){


    int menu;

    cout << "\n>>>Bem vindo ao sistema de cadastro!<<<" << endl;

        cout << "Escolha uma das opcoes abaixo para seguir:\n\n" << endl;
        cout << "1- Novo cadastro de vacinacao" << endl;
        cout << "2- Mostrar fila de cadastros." << endl;
        cout << "3- Mostrar e remover primeiro cadastro da fila." << endl;
        cout << "4- Sair." << endl;
        cin >> menu;
    
        while(menu != 4){
        switch (menu)
        {
        case 1:{
            inicializarSlots(slots);
            queueEntry pessoa;
            int escolha;
            cout << "\n---------------------------------------------" << endl;
            cout << "horarios disponiveis: " << endl;

        for(int i = 0; i < 10; i++){
            if (slots[i].fila.size() < 100){
                cout << i << "- " << diaEmString(slots[i].dia) << "(" << horarioEmString(slots[i].horario) << ")" << ": " << "disponivel";
                cout << "(" << (100-(slots[i].fila.size())) << " vagas" << ")" << endl;     
            } else {
                cout << i << "- " << diaEmString(slots[i].dia) << "(" << horarioEmString(slots[i].horario) << ")" << ": " << "indisponivel" << endl;
            }
        }

        cout << "Escolha o numero da data desejada" << endl;
        cin >> escolha;

        while (escolha < 0 || escolha > 10){
            cout << "Opção invalida! Tente novamente." << endl;
        }

        if(slots[escolha].fila.full()){
            cout << "Horario indisponivel" << endl;
            abort();
        } else {

            cout << "Digite o nome do paciente: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, pessoa.nome);

            cout << "Insira o endereco do paciente: " << endl;
            getline(cin, pessoa.endereco);

            cout << "Insira o cpf do paciente: " << endl;
            getline(cin, pessoa.cpf);

            cout << "Insira a idade do paciente: " << endl;
            cin >> pessoa.idade;

            if (pessoa.idade <= 5){
                cout << "\nVacinacao nao disponivel para essa faixa etaria!\n" << endl;
                abort();
            }

            Slot *slotEscolhido = &slots[escolha];
            slotEscolhido->fila.append(pessoa);
            cout << "\n>>> Cadastro realizado com sucesso! <<<" << endl;
             cout << "\n---------------------------------------------\n" << endl;

        cout << "Escolha uma das opcoes abaixo para seguir:\n\n" << endl;
        cout << "1- Novo cadastro de vacinacao" << endl;
        cout << "2- Mostrar fila de cadastros." << endl;
        cout << "3- Mostrar e remover primeiro cadastro da fila." << endl;
        cout << "4- Sair." << endl;
        cin >> menu;
        }



            break;
        }

        case 2:{
            inicializarSlots(slots);
            int escolhaSlot;

            cout << "Deseja consultar a fila para qual dia?" << endl;
            
            for(int i = 0; i < 10; i++){
                cout << i << "- " << diaEmString(slots[i].dia) << "(" << horarioEmString(slots[i].horario) << ") " << slots[i].fila.size() << " Pacientes cadastrados" << endl;

            }


            cin >> escolhaSlot;

            slots[escolhaSlot].fila.list();

        cout << "Escolha uma das opcoes abaixo para seguir:\n\n" << endl;
        cout << "1- Novo cadastro de vacinacao" << endl;
        cout << "2- Mostrar fila de cadastros." << endl;
        cout << "3- Mostrar e remover primeiro cadastro da fila." << endl;
        cout << "4- Sair." << endl;
        cin >> menu;


            break;
        }

        case 3:{
            int EscolhaRemove;

            cout << "Deseja remover um paciente de qual horario?" << endl;

             for(int i = 0; i < 10; i++){
                cout << i << "- " << diaEmString(slots[i].dia) << "(" << horarioEmString(slots[i].horario) << ") " << slots[i].fila.size() << " Pacientes cadastrados" << endl;

            }

            cin >> EscolhaRemove;
            while (EscolhaRemove > 9 || EscolhaRemove < 0)
            {
                cout << "Comando invalido!" << endl;
            }
            

            if (slots[EscolhaRemove].fila.empty()){
                cout << "Nao existem pacientes cadastrados nesse periodo!" << endl;
                abort();
            }  

            queueEntry PacienteVacinado = slots[EscolhaRemove].fila.serve();

            cout << "Paciente vacinado: " << endl;
            cout << "Nome: " << PacienteVacinado.nome << endl;
            cout << "CPF: " << PacienteVacinado.cpf << endl;
            cout << "Idade: " << PacienteVacinado.idade << endl;

        cout << "Escolha uma das opcoes abaixo para seguir:\n\n" << endl;
        cout << "1- Novo cadastro de vacinacao" << endl;
        cout << "2- Mostrar fila de cadastros." << endl;
        cout << "3- Mostrar e remover primeiro cadastro da fila." << endl;
        cout << "4- Sair." << endl;
        cin >> menu;
            break;
        }

            default:
            cout << "Opcao invalida!" << endl;
            abort();
            break;
        
        }


    }

     cout << "Servico finalizado! Obrigado por utilizar!";
     abort();
}





void inicializarSlots(Slot *slots) {
    int aux = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            slots[aux].dia = i;
            slots[aux].horario = j;
            aux++;
        }
    }
}

string diaEmString(int DiaEmNum){

    string dia;
    switch (DiaEmNum)
    {
    case 0:
        dia = "segunda";
        break;
    case 1:
        dia = "terca";
        break;
    case 2:
        dia = "quarta";
        break;
    case 3:
        dia = "quinta";
        break;
    case 4:
        dia = "sexta";
        break;
    default:
        break;
    }

    return dia;
}

string horarioEmString(int HoraEmNum){

    string hora;
    switch (HoraEmNum)
    {
    case 0:
        hora = "manha";
        break;
    case 1:
        hora = "tarde";
        break;
    default:
        break;
    }

    return hora;
}

