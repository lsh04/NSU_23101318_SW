#include <iostream>
using namespace std;

template <class T>

T add (T data [], int n) {
    T sum = 0;
    for(int i = 0; i <n; i++) {
        sum += data[i]; // data 0~i인덱스의 위치의 데이터를 모두 더한다. 
    }
    return sum;
}

int main() {
    int x [] = {1,2,3,4,5};
    double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

    cout << "sum of x [] =" << add(x,5) << endl;
    cout << "sum of d [] =" << add(d,6) << endl;
}