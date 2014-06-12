// Template questões solo
// Versão 0.05, Autor: David Sena, UFC Quixadá.
//
// Autor ou fonte da questão: David Sena

//__tag__ include
#include <iostream>
#include <vector>
#include "engine.h" //faca o download em github.com/senapk/fup
using namespace std;


//__tag__ questao
// Faça um código que simule o comportamento do jogo da forca.
// Voce recebe como parâmetro a palavra real e todos as letras que
// já foram chutadas pelo participante e deve retornar a palavra cifrada
// a ser apresentada pelo programa. Nas letras não acertadas ainda, voce
// deve colocar o caractere hided passado por parametro. Se nas palavras
// ouver pontuação ou espaço, voce deve imprimi-los corretametente. Se
// a letra for maiuscula, voce deve imprimir maiuscula.
// Ex:  palavra        ,   chutes         , hided  -> saida
// Ex: "Abacaxi"       ,  "axnpqe"        , '-'    -> "A-a-ax-"
// Ex: "extraordinario",  "aeioubcdfgh"   , '*'    -> "e***ao*di*a*io"
// Ex: "Teco-Teco!"    ,  "tbxyan"        , '_'    -> "T___-T___!"
// Ex: "Seu Pilantra!" ,  "yzxa"          , '*'    -> "*** ***a***a!"
//

//__tag__ recursos
string fname(const string palavra, const string chutes, char hided);

#ifndef __ALUNO__
string fname(const string palavra, const string chutes, char hided)
{
    return string("");
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 5);
    t_add(fname("Abacaxi"       , "axnpqe"     , '-') == "A-a-ax-");
    t_add(fname("extraordinario", "aeioubcdfgh", '*') == "e***ao*di*a*io");
    t_add(fname("Teco-Teco!"    , "tbxyan"     , '_') == "T___-T___!");
    t_add(fname("Seu Pilantra!" , "yzxa"       , '*') == "*** ***a***a!");
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
