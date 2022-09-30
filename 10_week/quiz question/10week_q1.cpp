#include<iostream>

int main(){

char n= 'A'; 
char& rn = n;

decltype(n) t = rn;        //==========LINE-1

++t;

std::cout << n << " " << rn << " " << t << std::endl; return 0;

}


//OPTIONS

//auto
//auto&
//decltype(rn)
//decltype(n)