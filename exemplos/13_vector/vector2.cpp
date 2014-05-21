#include <iostream>
#include <string>
#include <vector> //<list>

using namespace std;

int main(){
    vector<string> vetor{"Munrah", "SatanGoz", "Bison", "Freeza", "Equipe Rocket"};

    for( int i = 0; i < (int) vetor.size(); i++){
        cout << vetor[i] << endl;
    }

    //g++ -std=c++11
    for( string &nome : vetor){
        cout << nome << endl;
    }

    cout << "limite atual " << vetor.capacity() << endl;
    vetor.push_back("Rita");

    cout << "limite atual " << vetor.capacity() << endl;

    cout << endl;
    for( string &nome : vetor){
        cout << nome << endl;
    }
    cout << endl;
    vetor.erase(vetor.begin() + 1);

    for( string &nome : vetor){
        cout << nome << endl;
    }
    cout << endl;

    vetor.erase(vetor.begin() );

    for( string &nome : vetor){
        cout << nome << endl;
    }
    cout << endl;

    for( string &nome : vetor){
        cout << nome << endl;
    }
    cout << endl;

    for( string &nome : vetor){
        cout << nome << endl;
    }
    cout << endl;
    //cout << "Voce tem outro inimigo?" << endl;
    //char r = 0;
    //cin >> r;
    //if(r == 'y')
        //cin >> inimigos[tam++];

    //cout << endl;
    //fori(0, tam, 1)
        //cout << inimigos[i] << " ";
    //cout << endl;



    return 0;
}

