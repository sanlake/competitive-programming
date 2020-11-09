#include <iostream>

int32_t main(void){
    double r,pi=3.14159;
    std::cin>>r;

    std::cout.precision(3);
    std::cout<<"VOLUME = "<<std::fixed<<(4/3.0)*pi*r*r*r<<std::endl;
}
