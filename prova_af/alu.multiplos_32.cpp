//////////////////////////////////////////////////////////////////////////////
// Template Questões Individuais - Fundamentos de Programação - UFC         //
//            David Sena Oliveira, sena.ufc@gmail.com                       //
//                                                                          //
// template : @version - 3.0                                                //
// motor.h  : @version - 5.0                                                //
//          : download - goo.gl/taltal                                      //
//          : instalar - /usr/local/include/motor.h                         //
//////////////////////////////////////////////////////////////////////////////

#include <motor.h>

// Nome: Multiplos de 3 e 5
// Descrição:
// Se listar todos os números naturais abaixo de 10 que são múltiplos de 3 ou 5,
// temos 3, 5, 6 e 9. A soma desses múltiplos é 23.
// Determine a soma de todos os múltiplos de 3 ou 5, inferior ao número X.
//
// \param X o número de referência
// \return A soma dos múltiplos
//@begin

int fname(int num)
{
    return 0;
}
//@end

void tests()
{
    t_open("fname", PRATA, IF | FOR);
    t_add(fname(10) == 23);
    t_add(fname(11) == 33);
    t_add(fname(12) == 33);
}

MAIN();
