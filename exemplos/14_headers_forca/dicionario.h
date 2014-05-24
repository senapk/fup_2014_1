//dicionario.h
#ifndef DICIONARIO_H
#define DICIONARIO_H

#include <string>
#include <vector>
using namespace std;

struct Palavra{
    string texto;
    string dica;
};

vector <string> pegar_categorias();

Palavra pegar_palavra_aleatoria(string categoria);

vector <Palavra> pegar_todas_em_categoria(string categoria);

#endif //DICIONARIO_H
