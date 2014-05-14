//http://shelr.tv/records/53736e7f966080674200001e
#include <iostream>
using namespace std;

int main(int argc, char ** argv){
    cout << "numero de parametros: " << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << "parametro " << i << "  " << argv[i] << endl;
    }
    return 0;
}

