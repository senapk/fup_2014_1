//http://shelr.tv/records/5373796a9660806742000021
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//ler um parametro que corresponde ao nome do arquivo,
//abre o arquivo passado por parametro
//lê as linhas e imprime na tela.
int main(int argc, char ** argv){
    if(argc < 2){
        cout << "Olha filho, tem que passar outro parametro\n";
        return 1;
    }
    //argv[0] nome do programa
    //argv[1]

    //ifstream entrada(argv[1]);
    ifstream entrada;
    entrada.open(argv[1]);

    string linha;
    while(entrada){
        getline(entrada, linha);
        cout << linha << endl;
    }

    entrada.close();
    return 0;
}

