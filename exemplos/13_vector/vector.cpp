#include <iostream>
#include <string>

using namespace std;
#define pitombas(a, b, c) for(int i = (a); i < (b); i += (c))
const int MAX = 10;

int main(){
    const int MAX = 10;
    string inimigos[MAX] = {"Munrah", "SatanGoz", "Bison", "Freeza", "Equipe Rocket"};
    int tam = 5;

    for(int i = 0; i < tam; i++){
        cout << inimigos[i] << " ";
    }
    cout << endl;

    cout << "Voce tem outro inimigo?" << endl;
    char r = 0;
    cin >> r;
    if(r == 'y')
        cin >> inimigos[tam++];

    cout << endl;
    fori(0, tam, 1)
        cout << inimigos[i] << " ";
    cout << endl;



    return 0;
}

