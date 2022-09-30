#include<iostream> 
#include<iomanip>



long double operator""_KB(long double mem){/*--------------------*/ //LINE 1
    return 1024* mem;
}


long double operator""_B(long double mem){/*--------------------*/ //LINE 2
    return mem;
}
int main(){
    long double size = 10.0_KB + 2.0_B ; 
    std::cout << "size (in bytes): " << size; 
    return 0;

}



// LINE1 - long double operator"" KB(long double mem)
// LINE2 - long double operator"" B(long double mem)

// LINE1 - long double operator"" _KB(long double mem)
// LINE2 - long double operator"" _B(long double mem)

// LINE1 - long int operator"" _KB(long int mem)
// LINE2 - long int operator"" _B(long int mem)

// LINE1 - unsigned long long operator _KB(unsigned long long mem)
// LINE2 - unsigned long long _B(unsigned long long mem)