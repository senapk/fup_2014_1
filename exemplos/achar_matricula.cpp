#include <iostream>
using namespace std;

//1. Meta desse video: Descobir qual o aluno com melhor media.
   //Entrada um vetor de structs Aluno. Cada struct aluno possui
   //um vetor de notas. Vamos lá.
//2. Criando a struct aluno
struct Aluno{
    int matricula;
    //Ja deixo fixa a quantidade de elementos no vetor
    float notas[3];
};

// 4. Calcula a media de um aluno
float media_aluno(Aluno aluno)
{
    //criamos uma variavel para acumular os valores
    float media = 0;
    //usamos um for para pegar cada uma das 3 notas
    for(int i = 0; i < 3; i++) {
        //some a nota na media
        media += aluno.notas[i];
    }
    //divida a media por 3.
    media = media / 3;
    //retorne o valor calculado
    return media;
}

//11. prototipo da função que retorna a matricula e a melhor media
void pegar_melhor( Aluno vetor[], int tam, int &matricula, float &valor);


int main()
{
    //3. Pra começar, que tal fazer uma funcao que calcula a media de um
    //unico aluno. Vamos supor que todas as notas tem o mesmo peso.
    //4. Vamos criar um aluno pra testar a função
    //Aluno tarek = {109, {9, 9, 9.6}};//media 9.2
    //5. Imprimindo
    //cout << "Media do Tarek: " << media_aluno(tarek) << endl;
    //6. Executando
    //7. Comentando

    //8. Agora queremos saber qual aluno da turma tem a maior media e vai ganhar
    //uma viagem para Acapulco.

    //9. Vamos criar um vetor de alunos utilizando os conceitos que vimos
    //no video sobre inicialização inline de structs e vetores.
    //Cada struct pede um novo{}, e o vetor dentro da struct também.
    Aluno vetor[5] = { {101, {1.5, 8.5, 5.0}}, //aluno 1 media 5
                       {102, {3.5, 5.5, 3.0}}, //aluno 2 media 4
                       {103, {3.5, 5.5, 0.0}}, //aluno 2 media 3
                       {104, {6.5, 5.5, 9.0}}, //aluno 2 media 7
                       {105, {9.0, 9.0, 9.0}} }; //aluno3 media 6
    //inicializei as 5 structs alunos em uma unica instrução

    //10. Hora de criar uma funcao que retorna a matricula do aluno
    //com melhor media. Lembra da funcao que pegava o maior elemento
    //do vetor. Vamos fazer a mesma coisa.
    int matricula = 0;
    float valor = 0.0;
    pegar_melhor(vetor, 5, matricula, valor);
    cout << "matricula " << matricula << "  valor : " << valor << endl;
    //será????
    //
    //Estou retornando o menor valor!! Porque :(
    //Estava fazendo a comparação errada :D

    return 0;
}
//:D
//11. vamos lembrar como se obtem o maior elemento de um vetor
void maior_vetor(int vetor[], int tam, int &pos, int &valor) {
    pos = 0;
    valor = vetor[0]; //inicializando com o primeiro elemento
    for(int i = 0; i < tam; i++) {
        if(valor < vetor[i]){
            valor = vetor[i]; //se acho um valor melhor, guardo o valor
            pos = i; //e a posicao encontrada
        }
    }
    //ao final, tanto pos quanto valor jah estarão com os valores corretos.
    //nessa função não há retorno.
    //os paramentros são passados por referencia usando o &
    //isso significa que posso alterar os parametros reais ao inves das copias
}
//esqueci de comentar :)
//12. Construindo a função de achar o melhor aluno a partir de função acima
void pegar_melhor( Aluno vetor[], int tam, int &matricula, float &valor)
{
    matricula = vetor[0].matricula; //vou iniciar com a primeira matricula.
    //o valor guarda a media, vou guardar o valor do primeiro elemento
        //usando a funcao que fiz pra calcular a media.
    valor = media_aluno(vetor[0]); //colocando em valor a media do primeiro aluno
    for(int i = 0; i < tam; i++) {
        if(media_aluno(vetor[i]) > valor){ //se achar uma media melhor
            valor = media_aluno(vetor[i]); //se acho um valor melhor, guardo o valor
            matricula = vetor[i].matricula; //e a posicao encontrada
        }
    }
    //ao final, valor e matricula já possuem os valores corretos
    //hora de testar
}


