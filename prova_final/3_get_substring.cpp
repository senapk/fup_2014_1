// Template questões solo
// Versão 0.05, Autor: David Sena, UFC Quixadá.
//
// Autor ou fonte da questão:

//__tag__ include
#include <iostream>
#include "engine.h" //faca o download em github.com/senapk/fup
using namespace std;


//__tag__ questao
// Faça uma função que retorna uma substring dada a string passada
// e a posição inicial e final.
//
// Ex: "Pterodactilo", 2, 5 -> "erod"
// Ex: "Power Ranger", 4, 11 -> "r Ranger"
//

//__tag__ recursos
string fname(string palavra, int inicio, int fim);

#ifndef __ALUNO__
string fname(string palavra, int inicio, int fim)
{
    string res;
    return res;
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 2);
    t_add(fname("Pterodactilo", 2, 5)  == "erod");
    t_add(fname("Power Ranger", 4, 11) == "r Ranger");
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
