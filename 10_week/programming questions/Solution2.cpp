#include <iostream>

int getNumber(char c){
    return int(c);
}

int getNumber(double d){
    return int(d);
}

double getNumber(int i){
    return double(i);
}

template <class A, class D>   //LINE-1

auto divide(A n1, D n2) -> decltype(getNumber(n1)/getNumber(n2)){   //LINE-2

    return getNumber(n1) / getNumber(n2);
}
int main(){
    int a;
    double b;
    char c;
    std::cin >> a >> b >> c;
    std::cout << divide(c, a) << " ";
    std::cout << divide(c, b);
    return 0;
}
