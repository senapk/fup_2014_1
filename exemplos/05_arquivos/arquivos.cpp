//http://shelr.tv/records/53737307966080674200001f
#include <iostream>
using namespace std;
//para mudar a entrada padrao eh
//./a.out < input.txt
//
//./executavel < input.txt > numeros.txt

int main(){
    cout << "de quanto a quanto voce quer mostrar" << endl;
    int inicio = 0;
    int fim = 0;
    cin >> inicio;
    cin >> fim;
    //for(int i = inicio; i < fim; i++)
        //cout << i << endl;
    string nome;
    getline(cin, nome);
    getline(cin, nome);
    cout << "meu nome " << nome << endl;


    return 0;
}
