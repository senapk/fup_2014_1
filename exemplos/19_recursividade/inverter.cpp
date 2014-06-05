//So lembrando que esse codigo so funciona se for utilizada a flag -std=c++11
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int menor(int *vet, int tam){
    if (tam == 1)
        return vet[0];
    int eu = vet[0];
    int resto = menor (vet + 1, tam - 1);
    if(eu < resto)
        return eu;
    return resto;
}

int soma(int *vet, int tam){
    if (tam == 1)
        return vet[0];
    int eu = vet[0];
    int resto = soma (vet + 1, tam - 1);
    return eu + resto;
}

void invert(int *vet, int tam){
    if (tam == 1)
        return;
    if (tam == 2){
        std::swap(vet[0], vet[1]);
        return;
    }
    std::swap(vet[0], vet[tam - 1]);
    invert(vet + 1, tam - 2);
}

void selecao_sort(int *vet, int tam){
    for(int j = 0; j < tam - 1; j++){
        int menor = vet[j];
        int ind = j;
        for(int i = j + 1; i < tam; i++)
            if(vet[i] < menor){
                menor = vet[i];
                ind = i;
            }
        swap(vet[j], vet[ind]);
    }
}

void selecao_sort_rec(int *vet, int tam){
    if(tam == 1)
        return;
    int menor = vet[0];
    int ind = 0;
    for(int i = 1; i < tam; i++)
        if(vet[i] < menor){
            menor = vet[i];
            ind = i;
        }
    swap(vet[0], vet[ind]);
    selecao_sort(vet + 1, tam - 1);
}

int main(){
    vector<int> vet {1, 2, 3, -10, 5, 6, 0, 7, 8, 9};
    //cout << menor(vet, 10) << endl;
    //cout << soma(vet, 10) << endl;

    std::sort(vet.begin(), vet.end() );
    for (int i : vet)
        cout << i << " ";

    return 0;
}
