#include <iostream>
#include <string.h>
using namespace std;

bool is_min(char *texto)
{
    int tam = strlen(texto);
    for(int i = 0; i < tam; i++)
        if(texto[i] < 'a' || texto[i] > 'z')
            return false;
    return true;
}

bool is_min2(char *texto)
{
    int cont = 0;
    int tam = strlen(texto);
    for(int i = 0; texto[i] != '\0'; i++)
        if( 'a' <= *(texto + i) && *(texto + i) <= 'z')
            cont++;
    if(cont == tam)
        return true;
    return false;
}

int tamanho(char *str){
    int cont = 0;
    while(*(str++) != '\0')
        cont++;
    return cont;
}

void swap (int &x, int &y)
{

}
void swap2(int *x, int *y)
{
    *x = 4;
}
void swap3(int *x, int &y)
{

}

void calc(int *x, int &y, int *soma, int &sub)
{
    *soma = *x + y;
    sub   = *(x + 10) - y;
    sub   = x[10] - y;
}

int main(){
    char vet[] = {'a','b','c'};
    char nome[] = "david";

    int idades[10];

    //fazendo alocação dinamica
    int tam;
    cin >> tam;
    char * marca = new char[tam];

    strcpy(marca, "Pedro Paulo Junior");

    cout << endl << marca << endl;

    delete [] marca;

    int *voo = new int;
    delete voo;


    int chiclete = 5;
    mostre(chiclete);



    return 0;
}
