#include <iostream>
using namespace std;

//int get(int vet[], int ncol, int x, int y);

void print(int mat[4][3]){
    for (int y = 0; y < 4; y++) {
        for(int x = 0; x < 3; x++) {
            cout << mat[y][x] << " ";
        }
        cout << endl;
    }
}

void soma1(int mat[4][3]){
    for (int y = 0; y < 4; y++)
        for(int x = 0; x < 3; x++)
            mat[y][x]++;
}

void soma1(int vet[4]){
    for (int i = 0; i < 4; i++)
        vet[i]++;
}

int soma(int mat[4][3]){
    int total = 0;
    for (int y = 0; y < 4; y++)
        for(int x = 0; x < 3; x++)
            total += mat[y][x];
    return total;
}

int menor(int mat[4][3]){
    int menor = mat[0][0];
    for (int y = 0; y < 4; y++)
        for(int x = 0; x < 3; x++)
            if(mat[y][x] < menor)
                menor = mat[y][x];
    return menor;
}

//retornar o indice da linha de
//menor soma
int soma_linha(int mat[4][3]){
    int ind = 0;
    int menor_soma = 0;
    for(int x = 0; x < 3; x++)
        menor_soma += mat[0][x];

    for (int y = 0; y < 4; y++){
        int soma = 0;
        for(int x = 0; x < 3; x++)
            soma += mat[y][x];
        if(soma < menor_soma){
            ind = y;
            menor_soma = soma;
        }
    }
    return ind;
}

void soma_col(int mat[4][3]){
    for(int x = 0; x < 3; x++){
        int soma = 0;
        for (int y = 0; y < 4; y++)
            soma += mat[y][x];
        cout << soma << " ";
    }
}

int main(){
    int mat[4][3] = {{3, 2, 1},
                     {6, 5, 4},
                     {9, 8, 7},
                     {4, 3, 3}};
    print(mat);
    soma_linha(mat);
    return 0;
}
