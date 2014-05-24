#include <iostream>
#include "calc.h"
using namespace std;

int main(){
    int a = 10, b = 3.3;
    cout << "soma " << soma(a,b) << endl;
    cout << "sub " << sub(a,b) << endl;
    cout << "mult " << mult(a,b) << endl;
    cout << "div " << div(a,b) << endl;
    cout << "pot " << pot(a,b) << endl;
    return 0;
}

