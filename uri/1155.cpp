#include <iostream>

int32_t main(void){
    double s=0;
    
    for(int i=1; i<=100; i++) s+=(1.0/i);

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}
