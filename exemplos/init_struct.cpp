#include <iostream>
#include <string>
using namespace std;

 //1. Structs também podem ser inicializadas como vetores.
 //Primeiro vamos criar a struct Heroi.
 //string eh um tipo especial do c++ que serve para guardar textos.
 //pra poder utilizar, voce precisa dar o include <string>
struct Heroi{
    string nome;
    float forca;
    string inventario[3];//um vetor de nomes, com 3 nomes
};

 //2. Da mesma forma, precisamos de uma funcao pra imprimir o nosso Heroi.
void print_hero(Heroi heroi)
{
    cout << "Nome: " << heroi.nome << ", forca: " << heroi.forca << endl;
    for(int i = 0; i < 3; i++)//para imprimir os nomes
        cout << heroi.inventario[i] << ", ";
    cout << endl;
}

int main()
{
    //3. Primeiro instanciando um heroi parte por parte.
    Heroi jiraia;
    jiraia.nome = "Jiraia";
    //4. Sempre que a variavel for do tipo float, prefira colocar o ponto.
    jiraia.forca = 15.0;
    //5. Preenchendo o inventario elemento por elemento
    jiraia.inventario[0] = "Espada Olimpica";
    jiraia.inventario[1] = "Visor Chique";
    jiraia.inventario[2] = "Ombreiras Ninjas";

    print_hero(jiraia);

    //6. Agora criando e preenchendo ao mesmo tempo.
    //Structs podem ser inicializadas como vetores usando o {},
            //basta seguir a ordem que os elementos aparecem na struct.
    //Como há um vetor, lembre de inserir um {} extra.
    //E precisa seguir a ordem da struct. {nome, forca, {coisa1, coisa2, coisa3}}
    Heroi doug = {"Doug Funnie", 5.5, {"Costelinha", "Homem Codorna", "Diario"}};
    print_hero(doug); //vamos testar

    //7. Structs dentro de structs
    struct Ponto{
        int x, y;
        float tamanho;
    };

    //8. A struct Reta possui dois pontos e uma cor
    struct Reta{
        Ponto inicio, fim;
        string cor;
    };

    //8. Quando inicializa em uma linha fica assim.
    //{ {Ponto inicio}, {Ponto fim}, string cor};
    Reta reta = {{3, 4, 1.2}, {5, 7, 2.1}, "azul"};

    //9. Com vetores você só pode atribuir valores assim na criação.
    //int vet[3] = {1, 2, 3};
    //vet[3] = {4, 5, 6};// estahhhhh errraaaadoooooo;
    //Com structs você pode, desde que realize um cast.
    //As seguintes instruções são válidas
    reta =(Reta) {{4, 5, 2.2}, {7, 4, 1.1}, "vermelho"};
    reta.inicio = (Ponto) {5, 1, 9.9};
    //(Reta) e (Ponto) sao os casts.


    //Um abraço.
        //David Sena.
    return 0;
}

