#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <ctime> //time();

using namespace std;
void swap(string &a, string &b){
    string x = a;
    a = b;
    b = x;
}

void shuffle(string vet[], int tam){
    for( int i = 0; i < tam; i++)
    {
        int pos = rand() % tam;
        swap(vet[i], vet[pos]);
    }
}

//remove e decrementa o tam
void remover(string vet[], int pos, int &tam){
    //swap(vet[pos], vet[tam - 1]);
    //tam--;
    for(int i = pos; i < tam - 1; i++){
        vet[i] = vet[i + 1];
    }
    tam--;
}

void show(string vet[], int tam, bool com_numero, int tam_grupo){
    for(int i = 0; i < tam; i++) {
        if(i % tam_grupo == 0)
            cout << endl;
        if(com_numero)
            cout << i << " ";
        cout << vet[i] << " ";
    }
}

int main(){
    srand(time(NULL));
    string vet[] = {"david", "matheus", "jairo", "dejaime", "guilherme",
                    "leonardo", "isrhael", "monick", "ianka", "mikael",
                    "neto", "iago", "hugo", "debora", "camila"};

    int tam_vet = 15;
    int selecionado = 0;
    while(selecionado != -1){
        cout <<  "\033[2J" ;
        show(vet, tam_vet, true, 5);
        cout << endl << "Digite o numero de quem voce quer apagar ou -1" << endl;
        cin >> selecionado;
        if( selecionado < 0 || selecionado >= tam_vet )
            continue;
        remover(vet, selecionado, tam_vet);
    }

    int tgrupo = 0;
    cout << "Qual o tamanho do grupo??" << endl;
    cin >> tgrupo;

    shuffle(vet, tam_vet);
    cout <<  "\033[2J" ;
    show(vet, tam_vet, false, tgrupo);
    cout << endl;
}
