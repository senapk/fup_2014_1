//http://shelr.tv/records/537384af9660806742000022
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool somente_minusculas(string texto){
    for(int i = 0; i < (int)texto.length(); i++)
        if(texto[i] >= 'A' && texto[i] <= 'Z')
            return false;
    return true;
}

//ler um parametro que corresponde ao nome do arquivo,
//abre o arquivo passado por parametro
//lê as linhas e imprime na tela.
int main(int argc, char ** argv){
    if(argc < 3){
        cout << "Uso: ./a.out nome_do_arquivo palavra_procurada" << endl;
        return 1;
    }

    //carregando o arquivo para somente leitura
    ifstream entrada;
    entrada.open(argv[1]);

    string procurada(argv[2]);

    string linha;
    while(entrada){
        getline(entrada, linha);
        //se achar a palavra procurada entao imprimo
        if(linha.find(procurada) < linha.length())
            cout << linha << endl;
    }

    entrada.close();
    return 0;
}

