#include <iostream>
#include <string.h> //strlen, strcat, strcmp

using namespace std;

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
int substrings(char maior[], char menor[])
{
	int tmaior = strlen(maior);
	int tmenor = strlen(menor);
	int achei = 0;
	for(int i = 0; i <= tmaior - tmenor; i++)
		if(subachei(maior, menor, i))
			achei++;
	return achei;
}


int main(){
	char maior[] = "abatatadamataehchatafeitoata";
	char menor[] = "ata";
	cout << substrings(maior, menor);
	return 0;

}







