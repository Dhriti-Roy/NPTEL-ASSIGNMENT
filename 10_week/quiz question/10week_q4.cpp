//  WE HAVE TO FIND ERROR 

#include <iostream>
class ComplexNum{
    public:
        constexpr ComplexNum(int _r = 0, int _i=0):r(_r), i(_i){}
        
    private:
        int r, i;
};

int randGen(){ 
    return 10;
}

constexpr int numCen(int i, int j){ 
    return 1 + j;
}

int main(){
    constexpr ComplexNum c1(10, 20); //LINE-1
    constexpr int i= 10, j= 20;
    
    constexpr ComplexNum c2(i,  j); //LINE-2
    //constexpr ComplexNum c3(randGen(), randGen());//LINE3
    //constexpr ComplexNum c4(numGen(i, j), nunGen(i, j)); //LINE 4

return 0;
}