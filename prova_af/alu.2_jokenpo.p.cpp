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


// Nome: jokenpo
// No jokenpo, ou como é conhecido no Brasil, no pedra papel e tesoura, existem
// dois jogadores. Cada jogador escolhe uma opção e de acordo com as regras
// pode ocorrer vitória derrota ou empate.
// Determine dadas as entradas, se o jogador 1 ganhou, perdeu ou empatou.

enum Opcao{PEDRA, PAPEL, TESOURA};
enum Resultado{VITORIA, DERROTA, EMPATE};

//@begin

Resultado fname(Opcao jog1, Opcao jog2)
{
    return;
}
//@end

void tests()
{
    t_open("fname", PRATA, IF | ENUM);
    t_add(fname(PAPEL, PEDRA) == VITORIA);
    t_add(fname(PAPEL, TESOURA) == DERROTA);
}

//@tips
//http://reverse-string.wezo.com.br/pt-BR
//

MAIN();
