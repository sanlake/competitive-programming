#include <iostream>

int32_t main(void){
    std::string a;
    double b,c;
    
    std::cin>>a>>b>>c;

    std::cout.precision(2);
    std::cout<<"TOTAL = R$ "<<std::fixed<<b+(0.15*c)<<std::endl;    
}
