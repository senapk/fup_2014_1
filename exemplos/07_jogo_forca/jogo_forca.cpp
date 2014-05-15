#include <iostream>
#include "tk.h"
using namespace std;

int main(){
    tk_color('b');
    tk_write(5,5,"batatinha");
    tk_color('m');
    tk_write(10, 10, "pitombas");
    char c = tk_wait();
    tk_color('w');
    tk_write(20, 20, "%c", c);

    const char *cores = tk_info_colors();
    tk_move(5,5);
    for(int i = 0; i < (int)strlen(cores); i++)
    {
        tk_color(cores[i]);
        cout << "oi";
        //tk_write(4, i, "opa");
    }

    tk_wait();
    return 0;
}

