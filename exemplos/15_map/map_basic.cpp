/* Parte do código retirado de
    http://sweet.ua.pt/joao.p.silva/stl.html
*/

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	map<string, int> digitos;
	string s;

	digitos["zero"] = 0;
	digitos["um"] = 1;
	digitos["dois"] = 2;
	digitos["três"] = 3;
	digitos["quatro"] = 4;

    //opcao 1 - Usando iteradores classicamente
    cout << endl << "Opcao 1" << endl;

	map<string, int>::iterator iter; // o nosso iterator
	for (iter = digitos.begin(); iter != digitos.end(); iter++) {
		cout << iter->first << " = " << iter->second << endl;
	}

    //opcao 2 - Usando auto
    cout << endl << "Opcao 2" << endl;
	for (auto it = digitos.begin(); it != digitos.end(); it++) {
		cout << it->first << " = " << it->second << endl;
	}


    //opcao 3 - Usando for c++11
    cout << endl << "Opcao 3" << endl;
	for (const auto &k : digitos) {
		cout << k.first << " = " << k.second << endl;
	}

	return 0;
}
