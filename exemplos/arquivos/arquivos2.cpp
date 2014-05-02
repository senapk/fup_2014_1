#include <iostream>
#include <fstream> //para trabalhar com arquivos
#include <string>
using namespace std;


//./executavel < input.txt > numeros.txt

int main(){
    cout << "de quanto a quanto voce quer mostrar \n";
    int inicio = 0;
    int fim = 0;
    string nome;

    ifstream arq_input ("input.txt");
    ofstream arq_saida ("numeros.txt");

    arq_input >> inicio;
    arq_input >> fim;
    getline(arq_input, nome);
    getline(arq_input, nome);

    arq_saida << nome << endl;
    arq_saida << "meteoro de pegasus" << endl;

    return 0;
}
