#include <iostream>
using namespace std;

void calc(int * x, int * y, float * res)
{
    res[0] = *x + *y;
    res[1] = *x - *y;
    res[2] = *x * *y;
    res[3] = *x / *y;
}

//formas estranhas mais funcionais de fazer a mesma coisa
void calc2(int * x, int * y, float * res)
{
    res[0] = x[0] + y[0];
    *(res + 1) = *x - *y;
    res[2] = *x * *y;
    res[3] = *x / *y;
}

//faz a mesma coisa que a anterior
void calc3(int * x, int * y, float * res)
{
    *res = *x + *y;
    res++;
    *res = *x - *y;
    res++;
    *res = *x * *y;
    res++;
    *res = *x / *y;
}

int main(){
    int x[1] = {9};
    int y[1] = {7};
    float res[4];

    calc(x, y, res);

    int a = 9;
    int b = 4;

    calc3(&a, &b, res);

    cout << res[0] << " " << res[1] << " " <<
            res[2] << " " << res[3] ;

    return 0;
}






