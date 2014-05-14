#include <iostream>
#include <string.h> //strlen, strcat, strcmp

using namespace std;

//a pipos pip pipoc pipoca eh doce#
                                 pipoca#


//verifica se o menor está na posicao pos do menor
bool subachei( char maior[], char menor[], int pos)
{
	int tmenor = strlen(menor);
	for( int i = 0; i < tmenor; i++)
		if(maior[pos + i] != menor[i])
			return false;
	return true;
}

//conta quantas vezes a menor aparece no menor
void substring(char maior[], char menor[],
               int &qtd, int vet[])
{
    int tmaior = strlen(maior);
    int tmenor = strlen(menor);
    qtd = 0;
    for(int i = 0; i <= tmaior - tmenor; i++)
        if(subachei(maior, menor, i))
        {
            vet[qtd] = i;
            qtd++;
        }
}

//conta quantas vezes a menor aparece no menor
//crie o vetor de posicoes do tamanho correto
//e retorne o vetor
 substring(char maior[], char menor[], int &qtd)
{
    int tmaior = strlen(maior);
    int tmenor = strlen(menor);
    qtd = 0;
    for(int i = 0; i <= tmaior - tmenor; i++)
        if(subachei(maior, menor, i))
        {
            vet[qtd] = i;
            qtd++;
        }
}

int main(){
	char maior[] = "abatatadamataehchatafeitoata";
	char menor[] = "ata";
    int qtd;
    int vet[100];
    substring(maior, menor, qtd, vet);
    cout << qtd << "  " ;
    for (int i = 0; i < qtd; i++)
        cout << vet[i] << " ";
	return 0;

}







