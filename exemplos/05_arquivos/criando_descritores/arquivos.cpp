//http://shelr.tv/records/537375779660806742000020

#include <iostream>
#include <fstream> //para trabalhar com arquivos
#include <string>
using namespace std;

int main(){
    cout << "de quanto a quanto voce quer mostrar \n";
    int inicio = 0;
    int fim = 0;
    string nome;
    string time;

    //input file stream
    ifstream arq_input ("input.txt");
    //output file stream
    ofstream arq_saida ("numeros.txt");

    arq_input >> inicio;
    arq_input >> fim;
    getline(arq_input, nome);
    getline(arq_input, time);
    arq_saida << inicio << endl;
    arq_saida << fim << endl;
    arq_saida << nome << endl;
    arq_saida << time << endl;

   // arq_saida << nome << endl;
    //arq_saida << "meteoro de pegasus" << endl;

    return 0;
}
