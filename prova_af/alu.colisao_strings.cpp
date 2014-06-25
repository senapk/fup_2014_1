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


// Faça uma função que anule o final de uma string com o começo de outra como se fosse
// uma colisão. Como se você juntasse as duas palavras, mas excluisse as letras até
// que não sejam iguais as letras de contato
// Ex: olho, mel -> olhomel
// Ex: minhoca, arvore -> minhocrvore
// Ex: pegasus, suspiro -> pegapiro
// ex: mel, lema -> a
//
// \param left : a palavra da esquerda
// \param right: a palavra da direita
// \return     : a palavra colidida

//@begin

string fname(string left, string right)
{
    return "";
}
//@end

void tests()
{
    t_open("fname", PRATA, IF | FOR | STRING | VETOR);
    t_add(fname("olho", "mel") == "olhomel");
    t_add(fname("minhoca", "arvore") == "minhocrvore");
    t_add(fname("pegasus", "suspiro") == "pegapiro");
}

MAIN();
