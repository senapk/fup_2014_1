#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum Resultado{GANHOU, PERDEU, EMPATOU};

struct TipoJogo{
    string *vet;
    int tam;
    int dist;

    TipoJogo(int nivel){
        if(nivel == 1){
            tam = 3;
            dist = 1;
            vet = new string[3];
            vet[0] = "pedra";
            vet[1] = "tesoura";
            vet[2] = "papel";
        }
        if(nivel == 2){
            tam = 5;
            dist = 2;
            vet = new string[5];
            vet[0] = "pedra";
            vet[1] = "tesoura";
            vet[2] = "lagarto";
            vet[3] = "papel";
            vet[4] = "spock";
        }
    }
    ~TipoJogo(){
        delete [] vet;
    }


    Resultado resultado_de_A(int A, int B){
        if(A == B)
            return EMPATOU;
        if(B < A)
            B += tam; //colocando B na frente de A
        if ((A + dist) >= B)
            return GANHOU;
        return PERDEU;
    }

};


//

int escolha_computador(int tam){
    return rand() % tam;
}

//retorna indice no vetor de jogo
int perguntar_usuario(const TipoJogo &jogo){
    cout << "Escolha um numero abaixo, que corresponda";
    cout << "a sua opcao: " << endl;

    for( int i = 0; i < jogo.tam; i++){
        cout << i << " " << jogo.vet[i] << endl;
    }
    int opcao = -1;
    while(opcao < 0 || opcao >= jogo.tam){
        cin >> opcao;
    }
    return opcao;
}


int opcao_inicial(){
    int opcao = 0;
    cout << "Escolha 1 para modo frouxo, ou 2 para modo Cangaceiro" << endl;
    while(opcao != 1 && opcao != 2)
        cin >> opcao;
    return opcao;
}

int main(){
    srand(time(NULL));
    int opcao = opcao_inicial();

    TipoJogo jogo(opcao);

    int opUsuario = perguntar_usuario(jogo);
    int opPc =  escolha_computador(jogo.tam);

    cout << "Voce escolheu " << jogo.vet[opUsuario] << endl;
    cout << "Pc escolheu " << jogo.vet[opPc] << endl;
    Resultado res = jogo.resultado_de_A(opUsuario, opPc);
    if(res == GANHOU)
        cout << "voce ganhou" << endl;
    if(res == PERDEU)
        cout << "voce perdeu seu fraco" << endl;
    if(res == EMPATOU)
        cout << "empatou seu fraco" << endl;

    return 0;
}
