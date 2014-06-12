// Template questões solo
// Versão 0.05, Autor: David Sena, UFC Quixadá.
//
// Autor ou fonte da questão:

//__tag__ include
#include <iostream>
#include <vector>
#include "engine.h" //faca o download em github.com/senapk/fup
using namespace std;

//__tag__ questao
// Faça uma função que recebe um número num maior que 1 e retorna um vetor
// ordenado com os números que compõe a fatoração de num.
// Ex: num = 2 -> res {2}
// Ex: num = 6 -> res {2, 3}
// Ex: num = 12 -> res {2, 2, 3}
// Ex: num = 11 -> res {11}
// Ex: num = 60 -> res {2, 2, 3, 5}
// \param num : o número a ser fatorado
//
// \return    : o vetor com o resultado da fatoração

//__tag__ recursos
vector<int> fname(int num);

#ifndef __ALUNO__
vector<int> fname(int num)
{
    vector<int> res;
    return res;
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 4);
    {vector<int> v {2};          t_add(fname( 2) == v); }
    {vector<int> v {2, 2, 2};    t_add(fname( 8) == v); }
    {vector<int> v {2, 2, 3, 5}; t_add(fname(60) == v); }
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
//

//__tag__ refs
//
