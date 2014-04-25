#include <iostream>
#include <cstdlib>
#include <ctime>

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

    void zerar(){
        for(int y = 0; y < nl; y++)
            for(int x = 0; x < nc; x++)
                get(y, x) = 0;
    }

    void rand(){
        for(int y = 0; y < nl; y++)
            for(int x = 0; x < nc; x++)
                get(y, x) = std::rand() % 10;
    }

    void print(){
        for(int y = 0; y < nl; y++)
        {
            for(int x = 0; x < nc; x++)
                cout << get(y, x) << " ";
            cout << endl;
        }
    }
};


int main(){
    srand(time(NULL));
    Matriz m;
    m.init(4, 5);
    for(int y = 0; y < m.nl; y++)
        for(int x = 0; x < m.nc; x++)
            m.get(y, x) = 7;

    m.print();
    m.zerar();
    m.print();
    m.rand();
    m.print();

    cout << std::min(5, 9) << endl;
    cout << std::min("batata", "acerol");
    cout << std::abs(-9) << endl;


}




