#include <iostream>
#include <string>

using namespace std;

bool voce_eh_unico (const string texto, const int pos)
{
    for( int i = 0; i < pos; i++)
        if(texto[i] == texto[pos])
            return false;
    return true;
}

//conta quantas vezes a menor aparece no menor
int contar_unicos(const string texto)
{
    int qtd = 0;
    int tam = texto.length();
    for(int i = 0; i < tam; i++)
        if(voce_eh_unico(texto, i))
            qtd++;
    return qtd;
}

//conta quantas vezes a menor aparece no menor
int contar_unicos2(const string texto)
{
    int qtd = 0;
    int tam = texto.length();
    for(int i = 0; i < tam; i++)
    {
        bool achei = false;
        for( int j = 0; j < i; j++){
            if(texto[i] == texto[j])
            {
                achei = true;
                break;
            }
        }
        if(!achei)
            qtd++;
    }
    return qtd;
}

int main(){
    string texto = "hoje faco 30 anos! Parabens David!";
    cout << contar_unicos(texto) << endl;
    cout << contar_unicos2(texto) << endl;
    return 0;

}







