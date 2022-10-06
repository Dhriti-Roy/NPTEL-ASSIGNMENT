#include <iostream>
#include <list>
namespace Ver1{
    inline namespace Ver1_1 {    //LINE-1
        int addAll(std::list<int> i_list){
            int sum = 0;
            for(auto i : i_list){
                sum += i;
            }
            return sum;
        }
    }

    namespace Ver1_1 {    //LINE-2

        template<typename T>
        T addAll(std::list<T> t_list){
            T sum = 0;
            for(auto i : t_list){
                sum += i;
            }
            return sum;
        }
    }
}

using namespace Ver1;  

int main(){
    int n;
    std::cin >> n;
    std::list<int> ilist;
    std::list<double> dlist;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        ilist.push_back(x);
    }
    for(int i = 0; i < n; i++){
        double x;
        std::cin >> x;
        dlist.push_back(x);
    }
    std::cout << Ver1_1::addAll(ilist) << " ";
    std::cout << addAll(ilist) << " ";
    std::cout << addAll(dlist);
    return 0;
}
