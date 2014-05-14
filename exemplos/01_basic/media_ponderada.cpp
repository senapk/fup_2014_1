#include <iostream>
using namespace std;

struct Prova{
    float nota;
    int peso;
};

float calcular_media(Prova *provas, int qtd){
    float media = 0;
    float   soma = 0;
    for (int i = 0; i < qtd; i++)
    {
        media += provas[i].nota * provas[i].peso;
        soma += provas[i].peso;
    }
    media /= soma;
    return media;
}

int main(){
    Prova provas[3] = {{4, 1}, {6, 2}, {10, 4}};

    cout << calcular_media(provas, 3) << endl;
    return 0;
}
