#include <iostream>
using namespace std;

struct Matriz{
    int nl, nc;
    int *mat;
};

//inicializar o vetor que representa os elementos
void init_mat(Matriz &m, int nl, int nc){
    m.nl = nl;
    m.nc = nc;
    m.mat = new int[nc * nl];
}

int & get_elem(Matriz & m, int y, int x){
    return m.mat[y * m.nc + x];
}

void print(Matriz m){
    for(int y = 0; y < m.nl; y++)
    {
        for(int x = 0; x < m.nc; x++)
            cout << get_elem(m, y, x) << " ";
        cout << endl;
    }
}

int main(){
    Matriz m;
    init_mat(m, 4, 5);
    for(int y = 0; y < m.nl; y++)
        for(int x = 0; x < m.nc; x++)
            get_elem(m, y, x) = 7;

    print(m);


}




