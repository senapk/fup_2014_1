#include <iostream>
#include "basic.h"
#include "kk.h"
using namespace std;
using namespace tk;

enum CORES {NASCEU = 'g', MORREU = 'r', PERMANECEU = 'w'};
enum CARAS {VIVA = '#', MORTA = ' '};

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
bool existe_vivo(const vector2u& pos, const vector<string>& mat){
    return false;
}

/*
 * Essa função retorna o número de vizinhos vivos de uma celula.
 * \param pos : a posicao da celula
 * \param mat : a matriz de celulas
 *
 * \return    : a quantidade de vizinhos
 *
 */

int contar_vizinhos(const vector2u& pos, const vector<string>& mat){
    return false;
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
    return antiga;
}

/*
 * Essa função imprime uma geração
 *
 * \param offset : a posicao onde deve comecar a impressao
 * \param mat    : a geração a ser impressa
 *
 */

void show_mat(const vector2u &offset, const vector<string> &mat){
    for(int y = 0; y < (int) mat.size(); y++){
        for(int x = 0; x < (int) mat[0].length(); x++){
            if(mat[y][x] == VIVA){
                    tk::kwrite(x + offset.x, y + offset.y, 'w', "#");
            }
        }
    }
}

void carregar_GG(vector<string> &mat);

int main(){
    int tam = 60;
    vector<string> mat(tam, string(tam, ' '));
    carregar_GG(mat);

    Regras regras {2, 3, 3, 3};

    tk::kclear();
    while(true){
        mat = nova_geracao(mat, regras);

        tk::kwait();
        //tk::ksleep(300);
        tk::kclear();
        show_mat(vector2u(0, 0), mat);
    }

    return 0;
}


void carregar_GG (vector <string>& mat){
	mat[13][2] = VIVA;
	mat[12][3] = VIVA;
	mat[13][3] = VIVA;
	mat[12][4] = VIVA;
	mat[11][5] = VIVA;
	mat[11][6] = VIVA;
	mat[11][4] = VIVA;
	mat[12][5] = VIVA;
	mat[12][6] = VIVA;
	mat[10][5] = VIVA;
	mat[12][7] = VIVA;
	mat[13][7] = VIVA;
	mat[13][8] = VIVA;
	mat[18][4] = VIVA;
	mat[17][4] = VIVA;
	mat[17][5] = VIVA;
	mat[18][5] = VIVA;
	mat[18][6] = VIVA;
	mat[17][6] = VIVA;
	mat[20][3] = VIVA;
	mat[21][4] = VIVA;
	mat[22][5] = VIVA;
	mat[24][5] = VIVA;
	mat[24][6] = VIVA;
	mat[23][4] = VIVA;
	mat[23][3] = VIVA;
	mat[23][2] = VIVA;
	mat[22][1] = VIVA;
	mat[21][2] = VIVA;
	mat[24][1] = VIVA;
	mat[24][0] = VIVA;
	mat[35][2] = VIVA;
	mat[36][2] = VIVA;
	mat[36][3] = VIVA;
	mat[35][3] = VIVA;
	mat[2][4] = VIVA;
	mat[1][4] = VIVA;
	mat[1][5] = VIVA;
	mat[2][5] = VIVA;
	//glider1
	mat[25][9] = VIVA;
	mat[25][11] = VIVA;
	mat[26][10] = VIVA;
	mat[26][11] = VIVA;
	mat[24][11] = VIVA;
	//glider2
	mat[31][18] = VIVA;
	mat[32][19] = VIVA;
	mat[33][19] = VIVA;
	mat[33][18] = VIVA;
	mat[33][17] = VIVA;

	mat[33][25] = VIVA;
	mat[34][25] = VIVA;
	mat[34][26] = VIVA;
	mat[32][26] = VIVA;
	mat[32][27] = VIVA;
	mat[32][28] = VIVA;
	mat[31][28] = VIVA;
	mat[37][24] = VIVA;
	mat[38][24] = VIVA;
	mat[38][23] = VIVA;
	mat[37][23] = VIVA;
	mat[37][22] = VIVA;
	mat[38][22] = VIVA;
	mat[39][21] = VIVA;
	mat[40][20] = VIVA;
	mat[41][21] = VIVA;
	mat[39][25] = VIVA;
	mat[40][26] = VIVA;
	mat[41][25] = VIVA;
	mat[42][22] = VIVA;
	mat[42][23] = VIVA;
	mat[42][24] = VIVA;
	mat[52][22] = VIVA;
	mat[53][22] = VIVA;
	mat[53][23] = VIVA;
	mat[52][23] = VIVA;
}

