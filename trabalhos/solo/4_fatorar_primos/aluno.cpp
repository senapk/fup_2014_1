//__include__
#include <iostream>
#include <vector>
#define __NO_COLORS__
#include <engine.h>

using namespace std;

//__question__
// Faça uma função que recebe um número maior que 1 e retorna um vetor
// ordenado com os números que compõe a fatoração do número.
// Ex: num = 2 -> res {2}
// Ex: num = 6 -> res {2, 3}
// Ex: num = 12 -> res {2, 2, 3}
// Ex: num = 11 -> res {11}
// Ex: num = 60 -> res {2, 2, 3, 5}
// \param num : o número a ser fatorado
//
// \return    : o vetor com o resultado da fatoração

//prototipo
vector<uint> fatorar(uint num);

#ifndef __PROF__
vector<uint> fatorar(uint num)
{
    vector<uint> res;
    return res;
}

#endif //__PROF__

//__tests__
void test_fname()
{
    t_open("fname", 4);
    {vector<uint> v {2};          t_add(fatorar( 2) == v); }
    {vector<uint> v {2, 2, 2};    t_add(fatorar( 8) == v); }
    {vector<uint> v {2, 2, 3, 5}; t_add(fatorar(60) == v); }
    t_close();
}

//__tips__
//

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
