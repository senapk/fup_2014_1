// Template questões solo
// Versão 0.05, Autor: David Sena, UFC Quixadá.
//
// Autor ou fonte da questão:

//__tag__ include
#include <iostream>
#include <vector>
#include "engine.h" //faca o download em github.com/senapk/fup
using namespace std;


//__tag__ questao
// Faça um código que recebe um vetor de pontos alocados dinamicamente e retorne
// as referencias a todos os pontos que estão no primeiro quadrante.
// No primeiro quadrante, x e y do ponto são positivos.
//

//__tag__ recursos
struct Ponto{
    int x, y;
};


vector<Ponto*> fname(vector<Ponto*> pontos);

#ifndef __ALUNO__
vector<Ponto*> fname(vector<Ponto*> pontos)
{
    vector<Ponto*> vp;
    return;
}

#endif //__ALUNO__

//__tag__ testes
void test_fname()
{
    t_open("fname", 1);
    {
        vector<Ponto*> pontos(6);//cria um vetor de 6 pontos
        pontos[0] = new Ponto{ 1, 3};
        pontos[1] = new Ponto{-1, 3};
        pontos[2] = new Ponto{-1,-4};
        pontos[3] = new Ponto{ 5,-4};
        pontos[4] = new Ponto{ 6, 7};
        pontos[5] = new Ponto{ 8, 2};

        vector<Ponto*> resp {pontos[0], pontos[4], pontos[5]};
        t_add(fname(pontos) == resp);
    }
    {
        vector<Ponto*> pontos = { new Ponto{4, 4}, new Ponto{3, 2}, new Ponto{0, -1}};
        //pontos[0] = new Ponto{ 1, 3};
        //pontos[1] = new Ponto{-1, 3};
        //pontos[2] = new Ponto{-1,-4};
        //pontos[3] = new Ponto{ 5,-4};
        //pontos[4] = new Ponto{ 6, 7};
        //pontos[5] = new Ponto{ 8, 2};

        vector<Ponto*> resp {pontos[0], pontos[1]};
        t_add(fname(pontos) == resp);
    }


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
