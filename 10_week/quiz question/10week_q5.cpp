// FIND ERROR GENERATING LINES

#include <iostream>
void update (char* str) { /*some code*/ }

template<typename F, typename P> 
void caller(F func, P s){
    func(s);
}

int main(){
    char s[2] = "0";
    char *p =&s[1];
    caller (update, p); //LINE 1
    //caller (update, 0); //LINE 2
    //caller (update, NULL); //LINE 3
    caller (update, nullptr ) ; //LINE 4

return 0;
}
