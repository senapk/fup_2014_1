#include <iostream>
using namespace std;

struct Matriz{
    int nl, nc;
    int *mat;

    //inicializar o vetor que representa os elementos
    void init(int _nl, int _nc){
        nl = _nl;
        nc = _nc;
        mat = new int[nc * nl];
    }

    int & get(int y, int x){
        return mat[y * nc + x];
    }
};

void print(Matriz m){
    for(int y = 0; y < m.nl; y++)
    {
        for(int x = 0; x < m.nc; x++)
            cout << m.get( y, x) << " ";
        cout << endl;
    }
}

int main(){
    Matriz m;
    m.init(4, 5);
    for(int y = 0; y < m.nl; y++)
        for(int x = 0; x < m.nc; x++)
            m.get(y, x) = 7;

    print(m);
}




