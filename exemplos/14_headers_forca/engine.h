#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include "interface.h"
#include "dicionario.h"

struct Jogo{
    Palavra palavra;
    string chutes;
    Placar placar;
    int erros;
    int maxErros;
    int acertos;
};

//cifra a palavra a ser mostrada
string cifrar_palavra(std::string palavra, string chute);

//inicia um novo jogo escolhendo uma nova palavra
void iniciar_jogo(Jogo &jogo);

//if já acertou todas ou errou mais que o limite retorne true;
bool jogo_acabou(Jogo jogo);

#endif
