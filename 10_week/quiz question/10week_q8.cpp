#include<iostream>
int i = 10 ;

void test (int&& rv) { }

int getVal(){
    return i;
}

int& getRef(){
    return i;
}

int main() {
    //test(i);
    test(i + 10) ;
    test(getVal());
    test(getRef());
return 0;
}