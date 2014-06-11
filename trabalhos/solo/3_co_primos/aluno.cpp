//__include__
#include <iostream>
#include <vector>

#define __NO_COLORS__ //comente se quiser saida em cores
#include <engine.h>

using namespace std;

//__question__
// Faça uma função que determine se dois números são co primos e retorne
// os fatores que ambos tem em comum.
//
// A e B são co-primos a fatoração de ambos não tem fatores em comum.
// Ex: A = 10, B = 21
// A fatoração de A é {2, 5}
// A fatoração de B é {3, 7}
// Como A e B não tem fatores em comum então eles são co-primos.
//
// Ex2: A = 15, B = 21
// A = {3, 5}, B = {3, 7}
// Como ambos tem o fator 3, então eles não são co-primos.
//
// \param A e B : os dois números a serem avaliados
//
// \return      : o vetor de primos em comum. Se o vetor tiver tamanho
//              : 0 então eles são co-primos

//prototipo
vector<uint> fatores_comuns(uint A, uint B);

#ifndef __PROF__
vector<uint> fatores_comuns(uint A, uint B)
{
    vector<uint> vet;

    return vet;
}

#endif //__PROF__

//__tests__
void test_fname()
{
    t_open("fname", 5);
    { vector<uint> vet {    }; auto alu = fatores_comuns( 5,  3); t_add(vet == alu); }
    { vector<uint> vet {2   }; auto alu = fatores_comuns(10,  4); t_add(vet == alu); }
    { vector<uint> vet {3   }; auto alu = fatores_comuns( 6, 15); t_add(vet == alu); }
    { vector<uint> vet {2, 3}; auto alu = fatores_comuns( 6, 18); t_add(vet == alu); }
    { vector<uint> vet {2, 3}; auto alu = fatores_comuns(30, 36); t_add(vet == alu); }
    { vector<uint> vet {    }; auto alu = fatores_comuns(66, 35); t_add(vet == alu); }
    t_close();
}

//__refs__
//faça a questão de fatoração de números naturais

//__main__
int main(){
    test_fname();
#ifdef __HIDED__
    hided_fname();
#endif
    t_total();
    return 0;
}

//__tips__
//Se o número for primo e divisor de A e B então ele deve pertencer ao vetor
