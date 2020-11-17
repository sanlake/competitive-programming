#include <iostream>
#include <cmath>

int32_t main(void){
    double s=0;
    
    for(int i=1; i<=39; i+=2) s+=(i/(pow(2,(i/2))));

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}
