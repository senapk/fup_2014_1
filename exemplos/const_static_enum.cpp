#include <string>
#include <iostream>

using namespace std;

//modificadores const, unsigned, long, static
int getnum(){
    static int num = 1;
    num++;
    cout << num << endl;
    return num;
}
//enum

//TamCabelo em metros
//string corte{ reto, emv, comfranja, repicado}
//string cores{ preto, azul, rosa, reseo, rosinha, rosao, rosapink}

enum Corte {RETO, EMV, COMFRANJA, REPICADO};

//struct IdaAoSalao{
//}


void calcular_preco(Corte corte){
    switch(corte){
        case RETO:
            cout << "10 reais \n";
            break;
        case EMV:
            cout << "15 reais \n";
            break;
        case COMFRANJA:
            cout << "15 reais \n";
            break;
        case REPICADO:
            cout << "15 reais \n";
            break;
    }
}

void scalcular_preco(const string corte){
    if(corte == "reto")
        cout << "10 reais \n";
    if(corte == "emv")
        cout << "15 reais \n";

}
enum TipoImposto {INSS, FGTS, RENDA};

float calcular_imposto(string tipoImposto, float valor)


//arquivos

int main(){
    unsigned int num = 0;
    num = -4;
    cout << num << endl;

    const float quebrado = 6.4;
    //quebrado = 5.0;
    cout << quebrado << endl;

    int in = 1809308098;
    cout << in << endl;

    long int li = 991830921809308098;
    cout << li << endl;

    calcular_preco(EMV);
    scalcular_preco("emv");

    return 0;
}










