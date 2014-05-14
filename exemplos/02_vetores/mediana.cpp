#include <iostream>
using namespace std;

bool eh_menor(float a, float b){
    if(a < b)
        return true;
    return false;
}

void remover_func(float *vet, int &tam,
                  bool (* func)(float, float)){
    int menor = vet[0];
    int ind = 0;
    for(int i = 0; i < tam; i++)
        if(func(vet[i], menor)){
            ind = i;
            menor = vet[i];
        }
    std::swap(vet[ind], vet[tam - 1]);
    tam--;
}

float calcular_mediana(const float *v, int tam){
    float *vet = new float[tam];
    for(int i = 0; i < tam; i++)
        vet[i] = v[i];
    while( tam > 2){
        remover_func(vet, tam, eh_menor);
        remover_func(vet, tam, eh_maior);
    }
    float media;
    if(tam == 1)
        media = vet[0];
    else
        media = (vet[0] + vet[1])/2;
    delete [] vet;
    return media;
}

