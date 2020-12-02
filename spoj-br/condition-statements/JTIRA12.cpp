#include <iostream>

int32_t main(void) {
    int a,b;
    std::cin>>a>>b;

    if(b<=468 && b>=0)
        if(a<=432 && a>=0) std::cout<<"dentro"<<std::endl;
        else std::cout<<"fora"<<std::endl;
    else std::cout<<"fora"<<std::endl;
}
