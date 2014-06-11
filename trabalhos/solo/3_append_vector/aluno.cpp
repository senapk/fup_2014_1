//__include__
#include <iostream>
#include <vector>
#include <engine.h>

using namespace std;

//__question__
// Crie uma função que concatena elementos de um vetor para formar
// um único número.
// Ex: vet {1, 0, 0} deve dar como saída 100.
// Ex: vet {1, 10, 10} deve dar como saída 11010.
//
// \param vet : Um vetor contendo os elementos
//
// \return    : O número que é resultado da concatenação entre os elementos

//prototipo
long fname(vector<unsigned> vet);

#ifndef __PROF__
long fname(vector<unsigned> vet)
{
    return 0.0;
}

#endif //__PROF__

//__tests__
void test_fname()
{
    t_open("fname", 3);
    t_add(fname({1, 0}) == 10);
    t_add(fname({1, 10, 10}) == 11010);
    t_add(fname({25, 37, 50, 9}) == 25, 37, 50, 9);
    t_close();
}

//__tips__
//Aprenda a concatenar dois números e use um laço para concatenar todo o vetor.

//__refs__
//

//__main__
int main(){
    test_fname();
#ifdef __HIDED__
    hided_fname();
#endif
    t_total();
    return 0;
}
