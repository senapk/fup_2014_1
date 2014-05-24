/*
 * Utilizando mapa para guardar carros e pessoas
 */
#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Carro{
    string marca;
    int nportas;
};

int main(){

    map <string, Carro> mapa;
    while(true){
        string nome, cor;
        cout << "Digite seu nome 0 para terminar" << endl;
        cin >> nome;
        if(nome == "0")
            break;
        cout << "Digite sua cor" << endl;
        cin >> cor;
        mapa[nome] = cor;
    }

    for( auto &c : mapa)
        cout << c.first << " " << c.second << endl;

    cout << "Cor do David ";
    cout << mapa["David"];
    return 0;
}






