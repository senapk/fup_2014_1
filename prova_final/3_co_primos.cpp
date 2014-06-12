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
// Faça uma função que determine se dois números são co primos e retorne
// os fatores que ambos tem em comum.
//
// A e B são co-primos se a fatoração de ambos não tem fatores em comum.
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

//__tag__ recursos
vector<int> fname(uint A, uint B);

#ifndef __ALUNO__
vector<int> fname(uint A, uint B)
{
    vector<int> vet;
    return;
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 5);
    { vector<uint> vet {    }; auto alu = fname( 5,  3); t_add(vet == alu); }
    { vector<uint> vet {2   }; auto alu = fname(10,  4); t_add(vet == alu); }
    { vector<uint> vet {3   }; auto alu = fname( 6, 15); t_add(vet == alu); }
    { vector<uint> vet {2, 3}; auto alu = fname( 6, 18); t_add(vet == alu); }
    { vector<uint> vet {2, 3}; auto alu = fname(30, 36); t_add(vet == alu); }
    { vector<uint> vet {    }; auto alu = fname(66, 35); t_add(vet == alu); }
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
//faça a questão de fatoração de números naturais

//__tag__ refs
//
