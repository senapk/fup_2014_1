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

// A série de fibonatti é 1 2 3 5 8 ...
// A soma dos 3 primeiros termos é 6
// retorne o valor da soma de todos os termos até n
//@begin

int fname(int n){
    return 0;
}
//@end

void tests()
{
    t_open("fname", PRATA, IF | FOR);
    t_add(fname(3) == 6);
    t_add(fname(4) == 11);
}


MAIN();
