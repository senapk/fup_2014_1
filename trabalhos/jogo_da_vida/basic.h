#ifndef BASIC_H
#define BASIC_H

#define fori(a, b, c) for(int i = (a); i < (b); i += (c))

#include <vector>

template <class T>
using matriz = std::vector<std::vector<T>>;

//criando um vector de 2 elementos template
template <class T>
class vector2{
    public:
    T x, y;
    vector2(T _x, T _y):x(_x), y(_y){}
};

template <class T>
bool operator==(const vector2<T>& left, const vector2<T>& right){
    if((left.x == right.x) && (left.y == right.y))
            return true;
    return false;
}

typedef vector2<int> vector2i;
typedef vector2<float> vector2f;
typedef vector2<unsigned> vector2u;

#endif //BASIC_H
