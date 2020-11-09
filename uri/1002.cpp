#include <iostream>

int32_t main(void){
    double n=3.14159,r;
    std::cin>>r;

    std::cout.precision(4);
    std::cout<<std::fixed<<"A="<<(n*r*r)<<std::endl;
}
