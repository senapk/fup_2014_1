/*
 * Como seria uma função para calcular o somatório de f(x)
 * passando f por função
 *
 */
#include <iostream>
#include <vector>
using namespace std;

float somatorio(vector <float> entrada, float (*fn) (float)){
    float acc = 0;
    for(auto &elem : entrada){
        acc += fn(elem);
    }
    return acc;
}

float quadrado(float elem){
    return elem*elem;
}

float negativo(float elem){
    return -elem;
}

int main(){
    vector <float> ent{ 1, 3, 5, 7};
    cout << somatorio(ent, negativo) << endl;
    cout << somatorio(ent, quadrado) << endl;

    return 1;
}

