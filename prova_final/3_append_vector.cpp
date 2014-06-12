// Template questões solo
// Versão 0.05, Autor: David Sena, UFC Quixadá.
//
// Autor ou fonte da questão:

//__tag__ include
#include <iostream>
#include "engine.h" //faca o download em github.com/senapk/fup
using namespace std;


//__tag__ questao
// Crie uma função que concatena elementos de um vetor para formar
// um único número.
// Ex: vet {1, 0, 0} deve dar como saída 100.
// Ex: vet {1, 10, 10} deve dar como saída 11010.
//
// \param vet : Um vetor contendo os elementos
//
// \return    : O número que é resultado da concatenação entre os elementos

//__tag__ recursos
long fname(vector<unsigned> vet);

#ifndef __ALUNO__
long fname(vector<unsigned> vet)
{
    return 0.0;
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 3);
    t_add(fname({1, 0}) == 10);
    t_add(fname({1, 10, 10}) == 11010);
    t_add(fname({25, 37, 50, 9}) == 2537509);
    t_close();
}

//__tag__ main
int main(){
    test_fname();
#ifdef __HIDED__
    hided_fname();
#endif
    t_total();
    return 0;
}

//__tag__ dicas
//Aprenda a concatenar dois números e use um laço para concatenar todo o vetor.


//__tag__ refs
//
