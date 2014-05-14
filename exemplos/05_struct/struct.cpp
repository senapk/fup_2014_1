#include <iostream>

using namespace std;


//A funcao deve retornar em pos_menor a posicao do menor
//A funcao deve retornar em valor_menor o valor do menor
void menor(int vet[], int tam, int &pos_menor, int &valor_menor)
{
    int menor_val = vet[0];
    int pos       = 0;
    //ou seja, ja inicializamos com um valor válido
    //Agora vamos varrer o vetor e procurar um valor menor que o atual
    for(int i = 0; i < tam; i++)
    {
        if(vet[i] < menor_val)
        {
            menor_val = vet[i];
            pos = i; //precisamos guardar a posicao se quisermos ao final
            //saber qual a posicao do menor elemento
        }
    }
    //Ao final do for, a variavel menor_val quarda o menor valor
    //e a variavel pos guarda a posicao do menor valor.

    //nao temos mais valor de retorno.
    //agora o retorno se dará nas variáveis passadas por referencia.
    pos_menor = pos;
    valor_menor = menor_val;
}

int main()
{
    //agora vamos testar nossa implementacao
    //vamos criar um vetor
    int vetor[] = { 1, 2, 3, 4, 10, 5, 0, 7, 8, 9};
    //um vetor de 10 posicoes, o menor valor eh 0

    int pos_menor = 0;
    int valor_menor = 0;
    //as variaveis acima serão alteradas dentro da função
    //a funcao não tem mais retorno, então não retorna nada pro cout
    menor(vetor, 10, pos_menor, valor_menor);

    cout << "Posicao = " << pos_menor << ", Valor= " << valor_menor << endl;

    //hora de compilar
    //certinho. E se quisessemos obter tambem a posição???
    //Vamos adicionar outro parametro na nossa função.
    //E vamos passar por referencia.
    //
    //Hora de compilar
    //
    //Certinho, posicao 6 significa o setimo elemento.
    //
    //
    //Um abraço.
    //
    //David Sena


    return 0;
}
