//interface.h
#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>
#include <vector>
#include "dicionario.h"
using namespace std;

enum RESULTADO { GANHOU, PERDEU };

struct Placar{
    int vitorias;
    int derrotas;
};


//Pergunta qual a categoria que o usuario quer jogar e retorna a categoria
string escolhar_categoria(vector <string> categorias);

//mostra de forma visual ou textual quantos erros o jogador possui na partida
void mostrar_erros(int erros, int max);

//pega um chute do usuario que ainda nao tenha sido chutado
char pegar_chute(string chutes);

//mostra a lista de chutes do usuario
void mostrar_chutes(string chutes);

//mostra a palavra na tela  ex: "_A_I_ S_NA"
void mostrar_palavra(Palavra palavra);

//mostrar resultado da partida
void mostrar_resultado_partida(RESULTADO resultado, Placar placar);

bool menu_jogar_novamente(Placar placar);

#endif //interface_h
