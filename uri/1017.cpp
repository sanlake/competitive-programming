#include <iostream>

int32_t main(void){
    int v,t;
    std::cin>>t>>v;
    
    std::cout.precision(3);
    std::cout<<std::fixed<<v*t/12.0<<std::endl;
}
