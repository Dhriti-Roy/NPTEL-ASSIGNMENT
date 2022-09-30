#include<iostream> 
struct Oper1{
    int i;
    Oper1 (int _i): i(_i){}
    int& operator()() { std::cout << "1"; return i; }
};

struct Oper2{
    int i;
    Oper2 (int _i): i(_i){}
    int operator()() { std::cout << "2"; return i; }
};


template < typename U>

decltype(auto) foobar(U& op) { //============================LINE-1
return op();
}

int main(){
    Oper1 o1{10};
    Oper2 o2{10};
    
    foobar(o1) = 20; 
    foobar(o2);
    return 0;
    
}


// OPTIONS

//auto foobar(U& op) ->decltype(op())
//auto foobar(U& op) 
//auto& foobar(U& op) 
//decltype(auto) foobar(U& op) 