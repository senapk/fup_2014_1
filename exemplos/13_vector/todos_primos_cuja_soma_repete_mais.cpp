#include <iostream>
#include <vector>

using namespace std;

//a batata da minha perna eh fininha
//aaaaaiaeaeiia
string pegar_vogais(const string& entrada){
	string ret;
	int tam = entrada.length();
	
	for(int i = 0; i < tam; i++){
		if(entrada[i] == 'a' || entrada[i] == 'e' || 
		   entrada[i] == 'i' || entrada[i] == 'o' ||
		   entrada[i] == 'u'){
			   ret = ret + entrada[i];
		}
	}
	return ret;
}

//entre um e mil, acontece alguma vez de o numero primo
//da frente ter o mesmo valor de soma dos algarismos que 
//o primo de tras e quem sao esses primos
//2, 3, 5, 7, 11, 13, 17, 19, 23, .. 1000
//qual o numero cuja soma aparece mais
//todos os primos que tem essa soma
bool eh_primo(int num){
	if(num < 2)
		return false;
	for(int i = 2; i < num; i++)
		if(num % i == 0)
			return false;
	return true;
}
	

//346 -> 13 -> 4
//97 -> 16 -> 7
int soma_digitos(int num){
	if(num < 10)
		return num;
		
	int acc = 0;
	while(num > 0){
		acc += num % 10;
		num = num / 10;
	}
	return soma_digitos(acc);
}

vector<int> todos_os_primos(int comeco, int fim){
	vector<int> res;
	for(int i = comeco; i <= fim; i++){
		if(eh_primo(i))
			res.push_back(i);
	}
	return res;
}

//retorna um vetor de aparecimento das somas
//recebe um vetor de primos
//0 1 2  3 4 5
//3 2 10 5 9 30
vector<int> quantas_vezes(vector<int> primos){
	vector<int> res(10, 0);
	for(auto elem : primos)
		res[soma_digitos(elem)]++;
	return res;
}
	
//retorna todos os primos que tem essa soma
vector<int> pegar_primos(vector<int> primos, int soma){
	vector<int> res;
	for(const auto& elem : primos)
		if(soma_digitos(elem) == soma)
			res.push_back(elem);
	return res;
}

int main(){
	vector<int> primos = todos_os_primos(0, 1000);
	vector<int> contagem = quantas_vezes(primos);
	int max = contagem[0];
	int ind = 0;
	for(int i = 0; i < 10; i++){
		if(contagem[i] > max){
			max = contagem[i];
			ind = i;
		}
	}
	vector<int> res = pegar_primos(primos, ind);
	
	for( const auto& elem : res)
		cout << " " << elem;
	
    return 0;
}

