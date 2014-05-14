#include <iostream>
using namespace std;

//./executavel < input.txt > numeros.txt

int main(){
    cout << "de quanto a quanto voce quer mostrar";
    int inicio = 0;
    int fim = 0;
    cin >> inicio;
    cin >> fim;
    for(int i = inicio; i < fim; i++)
        cout << i << endl;
    return 0;
}
