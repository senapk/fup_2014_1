#include <iostream>
using namespace std;

template <class Tipo>
struct Ponto{
    Tipo x, y;
};

template <class Tipo>
void mostrar (Ponto<Tipo> p){
    cout << "x " << p.x << " y " << p.y << endl;
}

int main(){
    Ponto<int> p = {4, 5};
    Ponto<float> pf = {4.4, 5.3};
    Ponto<string> pS = {"x amigo", " y amigo"};

    mostrar(p);
    mostrar(pf);
    mostrar(pS);
    return 0;
}










