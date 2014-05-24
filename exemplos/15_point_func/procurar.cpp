#include <iostream>
#include <vector>

using namespace std;

struct Pessoa{
    char sexo;
    float peso;
    int idade;
};

//achar todas as pessoas menores de 12 anos de idade
vector <Pessoa> acharCriancas (vector <Pessoas> banco){
    vector <Pessoa> criancas;

    for( auto &pessoa : banco){
        if (pessoa.idade < 12)
            criancas.push_back(pessoa);
    }
    return criancas;
}

//achar todas as mulheres idosas
vector <Pessoa> acharIdosas (vector <Pessoas> banco){
    vector <Pessoa> idosas;

    for( auto &pessoa : banco){
        if (pessoa.sexo = 'f' && pessoa.idade > 65)
            idosas.push_back(pessoa);
    }
    return idosas;
}

//30 e 40, homens, mais de 100 kilos
vector <Pessoa> acharBarrigudosMeiaIdade (vector <Pessoas> banco){
    vector <Pessoa> barrigudos;

    for( auto &pessoa : banco){
        if (pessoa.sexo = 'm' && (pessoa.idade > 30 && pessoa.idade <40)
                && pessoa.peso > 100)
            barrigudos.push_back(pessoa);
    }
    return barrigudos;
}

/* Agora passando as funções por parametros */

bool ehHomemM80(Pessoa p){
    if (pessoa.sexo = 'm' && pessoa.peso > 80)
        return true;
    return false;
}

bool ehMulherm30kg(Pessoa p){
    if (pessoa.sexo = 'f' && pessoa.peso < 30)
        return true;
    return false;
}

/* Uma função generica para capturar todas as pessoas que atendem a um requisito */
vector <Pessoa> acharPessoas(vector <Pessoas> banco, bool(*funcao)(Pessoa)){
    vector <Pessoa> resposta;

    for( auto &pessoa : banco){
        if(funcao(pessoa))
            resposta.push_back(pessoa);
    }
    return resposta;
}

int main(){
    //falta criar o banco
    vector < Pessoa > homensM80 = acharPessoas(banco, ehHomemM80);
    vector < Pessoa > mm30 = acharPessoas(banco, ehMulherm30kg);
    return 0;
}

