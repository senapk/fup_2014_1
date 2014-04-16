#include <iostream>
using namespace std;

    //1. Vamos aprender sobre inicialização de coisas. Quando falo coisas,
    //quero dizer vetores e structs.

    //5. Eis aqui o prototipo da nossa funcao.
    //A funcao vem la em baixo
    void mostrar_vetor(int vetor[], int tam);

int main()
{
    //2. Primeiro vamos criar um vetor de 5 inteiros sem preenche-lo.
    int vetor1[5];
    //3. Depois vamos preencher elemento por elemento.
    vetor1[0] = 4;
    vetor1[1] = 3;
    vetor1[2] = 5;
    vetor1[3] = 9;
    vetor1[4] = 1;

     //9. Uma outra possibilidade eh preencher os elementos na hora da criacao.
     //Usamos os parenteses pra isso.
    int vetor2[7] = { 1, 2, 5, 6, 7, 9, 1};
    cout << "vetor2 :";
    mostrar_vetor(vetor2, 7);
    //chamando a funcao que imprime o vetor

     //10. Ultima dica. Se voce preencher na inicializacao, nao precisa dizer
     //o tamanho do vetor. Ele aloca o tamanho necessário.
    int vetor3[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    cout << "vetor3 :";
    mostrar_vetor(vetor3, 10);

    //4. Que tal agora usar uma funcao para mostrar nosso vetor??
    //Vamos fazer a funcao que mostra um vetor de inteiros de qualquer tamanho.
     //7. Chamando a função
    cout << "vetor1 :";
    mostrar_vetor(vetor1, 5);
     //8. Vamos conferir a saida para vetor 1.

    return 0;
}

 //6.Voce pode colocar as funções depois da main se colocar o prototipo antes.
void mostrar_vetor(int vetor[], int tam)
{
    for(int i = 0; i < tam; i ++ ) //para todos os elementos
        cout << vetor[i] << ", ";
    cout << endl; //ao final da uma quebra de linha
}

