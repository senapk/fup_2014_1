#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "tk.h"
using namespace std;
using namespace tk;

enum CARAS {VIVA = '#', MORTA = ' '};

/*
 * Struct para representar um ponto
 */
struct Point{
    unsigned x, y;
    //construtor
    Point(unsigned _x, unsigned _y){
        x = _x;
        y = _y;
    }
};

struct Regras{
    //para os vivos
    int minAlive; //o minimo de vizinhos para nao morrer
    int maxAlive; //o maximo de vizinhos para nao morrer
    //para os mortos
    int minBorn; //min de vizinhos para nascer
    int maxBorn; //max de vizinhos para narcer

};

/*
 * Essa função verifica se o indice passado nao esta fora dos limites
 * da matriz e se o elemento desse indice está vivo.
 * Se os dois casos forem verdadeiros, retorna true.
 * Caso algum dos dois for falso, retorne false.
 *
 * use pos.x para acessar o x e pos.y para acessar o y.
 * Os valores de mat podem ser VIVA e MORTA
 * O numero de linhas pode ser obtido com mat.size()
 * O numero de colunas pode ser obtido com mat[0].length()
 *
 * \param pos : a posicao x e y a ser analisada
 * \param mat : um vector de strings com os individuos
*
 */
bool existe_vivo(const Point& pos, const vector<string>& mat){
    //TODO seu codigo aqui
    return false;
}

/*
 * Essa função retorna o número de vizinhos vivos de uma celula.
 * \param pos : a posicao da celula
 * \param mat : a matriz de celulas
 *
 * \return    : a quantidade de vizinhos
 */

int contar_vizinhos(const Point& pos, const vector<string>& mat){
    //TODO seu codigo aqui
    return 0;
}

/*
 *  Essa funcao retorna uma nova geração de células.
 *  A partir da analise da geração antiga e das regras que definem nascimento
 *  e morte crie e retorne uma nova geração.
 *
 *  \param antiga : geração antiga
 *  \param regras : uma struct com as regras
 *
 *  \return : uma matriz do mesmo tamanho de antiga com uma nova geração
 *
 */

vector<string> nova_geracao(const vector<string>& antiga, const Regras& regras){

    //inicia a nova a partir da antiga
    vector <string> nova (antiga);
    //todo seu codigo aqui
    return nova;
}

/*
 * Essa função imprime uma geração
 *
 * \param offset : a posicao onde deve comecar a impressao
 * \param mat    : a geração a ser impressa
 *
 */

void show_mat(const Point &offset, const vector<string> &mat){
    for(int y = 0; y < (int) mat.size(); y++){
        for(int x = 0; x < (int) mat[0].length(); x++){
            if(mat[y][x] == VIVA){
                    tk::kwrite(x + offset.x, y + offset.y, 'w', "#");
            }
        }
    }
}

//prototipo, funcao esta depois da main
void carregar_GG(vector<string> &mat);

/*
 * O objetivo dessa função é carregar o automato a partir de um arquivo.
 *
 * \param o path do arquivo carrega um automato
 * \return o automato num formato de vetor de strings
 *
 * Observe que se o autorma for de 6 por 6, voce só precisa retornar um vetor 6 por 6
 */
vector<string> carregar_automato(string path){
    vector<string> mat;
    //TODO seu codigo aqui
    return mat;
}

/*
 * O objetivo dessa função é inserir o automato menor obtido na função carrega_automato
 * dentro da matriz maior que representa o mapa do jogo.
 *
 * \param O autormato menor
 * \param O automato maior
 * \param A posição de insercao
 *
 * \return true se a inserção foi feita com sucesso, e false caso a inserção leve
 * para fora dos limites da matriz maior
 */
bool inserir(const vector<string>& menor, vector<string>& maior, Point pos){
    //todo seu codigo aqui
    return true;
}

/*
 * O objetivo dessa função decidir se o automato a ser carregado eh o glider_gun
 * ja disponivel na funcao carrega_GG ou se sera o automato do usuario passado por
 * parametro na função main.
 *
 * Se a quantidade de argumentos for 1, ou seja, apenas o nome da função, carregue
 * o glider_gun. Se a quantidade de parametros for 4 leia o arquivo e carregue o
 * automato na posição passada por parametro.
 * Use as funções carregar_automato e inserir_automato
 *
 */
vector<string> carregar_matriz(int argc, char **argv){
    //cria um vetor vazio
    vector<string> mat(60, string(80, ' '));
    if(argc == 1){
        //passa a matriz por referencia para ser preenchida
        carregar_GG(mat);
        return mat;
    }

    if(argc < 4){
        cout << "./main input.txt 10 5 " << endl;
        return mat;
    }

    //carrega o automato em automato
    vector<string> automato = carregar_automato(string(argv[1]));

    //tranforma os valores passados de string para inteiros
    //Carregue em posição os valores de argv[2] e argv[3]
    //Tranforme de string para inteiro e guarde em pos.x e pos.y
    Point pos(0,0);
    //TODO seu codigo aqui

    inserir(automato, mat, pos );
    return mat;
}


//./main input.txt 10 5
int main(int argc, char **argv){

    vector<string> mat = carregar_matriz(argc, argv);

    Regras regras {2, 3, 3, 3};

    tk::kclear();
    while(true){
        //fazendo copia
        //criando nova geracao em mat
        mat = nova_geracao(mat, regras);

        tk::kwait();
        tk::kclear();
        show_mat(Point(0, 0), mat);
    }

    return 0;
}


void carregar_GG (vector <string>& mat){
	mat[13][2] = VIVA; mat[12][3] = VIVA; mat[13][3] = VIVA; mat[12][4] = VIVA; mat[11][5] = VIVA;
	mat[11][6] = VIVA; mat[11][4] = VIVA; mat[12][5] = VIVA; mat[12][6] = VIVA; mat[10][5] = VIVA;
	mat[12][7] = VIVA; mat[13][7] = VIVA; mat[13][8] = VIVA; mat[18][4] = VIVA; mat[17][4] = VIVA;
	mat[17][5] = VIVA; mat[18][5] = VIVA; mat[18][6] = VIVA; mat[17][6] = VIVA; mat[20][3] = VIVA;
	mat[21][4] = VIVA; mat[22][5] = VIVA; mat[24][5] = VIVA; mat[24][6] = VIVA; mat[23][4] = VIVA;
	mat[23][3] = VIVA; mat[23][2] = VIVA; mat[22][1] = VIVA; mat[21][2] = VIVA; mat[24][1] = VIVA;
	mat[24][0] = VIVA; mat[35][2] = VIVA; mat[36][2] = VIVA; mat[36][3] = VIVA; mat[35][3] = VIVA;
	mat[2][4] = VIVA; mat[1][4] = VIVA; mat[1][5] = VIVA; mat[2][5] = VIVA;
    //glider1
	mat[25][9] = VIVA; mat[25][11] = VIVA; mat[26][10] = VIVA; mat[26][11] = VIVA; mat[24][11] = VIVA;
	//glider2
	mat[31][18] = VIVA; mat[32][19] = VIVA; mat[33][19] = VIVA; mat[33][18] = VIVA; mat[33][17] = VIVA;

	mat[33][25] = VIVA; mat[34][25] = VIVA; mat[34][26] = VIVA; mat[32][26] = VIVA; mat[32][27] = VIVA;
	mat[32][28] = VIVA; mat[31][28] = VIVA; mat[37][24] = VIVA; mat[38][24] = VIVA; mat[38][23] = VIVA;
	mat[37][23] = VIVA; mat[37][22] = VIVA; mat[38][22] = VIVA; mat[39][21] = VIVA; mat[40][20] = VIVA;
	mat[41][21] = VIVA; mat[39][25] = VIVA; mat[40][26] = VIVA; mat[41][25] = VIVA; mat[42][22] = VIVA;
	mat[42][23] = VIVA; mat[42][24] = VIVA; mat[52][22] = VIVA; mat[53][22] = VIVA; mat[53][23] = VIVA;
	mat[52][23] = VIVA;
}

