#include <iostream>

int32_t main(void){
    int n,c=0,s=0;

    while(std::cin>>n && n>=0) { c++; s+=n; }

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<(double)s/c<<std::endl;
}
