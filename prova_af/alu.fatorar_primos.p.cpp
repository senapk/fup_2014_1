//////////////////////////////////////////////////////////////////////////////
// Template Questões Individuais - Fundamentos de Programação - UFC         //
//            David Sena Oliveira, sena.ufc@gmail.com                       //
//                                                                          //
// template : @version - 3.0                                                //
// motor.h  : @version - 5.0                                                //
//          : download - goo.gl/taltal                                      //
//          : instalar - /usr/local/include/motor.h                         //
//////////////////////////////////////////////////////////////////////////////

#include "motor.h"
#include <vector>


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

//@begin

vector<int> fname(int num)
{
    vector<int> res;
    return res;
}
//@end

void tests()
{
    t_open("fname", OURO, IF | FOR | VETOR | VECTOR );
    {vector<int> v {2};          t_add(fname( 2) == v); }
    {vector<int> v {2, 2, 2};    t_add(fname( 8) == v); }
    {vector<int> v {2, 2, 3, 5}; t_add(fname(60) == v); }
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//

MAIN();