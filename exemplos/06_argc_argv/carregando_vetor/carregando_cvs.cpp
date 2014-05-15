#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char ** argv){
    if (argc < 2){
        cout << "Passe o nome do arquivo por parametro" << endl;
        return 1;
    }
    ifstream input_file;
    input_file.open(argv[1]);

    if(input_file.fail())
        cout << "Nao conseguiu abrir" << endl;

    string palavras[2000];
    int ind = 0;
    char ch;
    while(!input_file.fail()){
        input_file >> noskipws >> ch;
        if(ch == ',' || ch == '\n')
            ind++;
        else
            palavras[ind] = palavras[ind]  + ch;
    }

    for(int i = 0; i < ind; i++)
        cout << palavras[i] << endl;

    return 0;
}

