#include <iostream>
#include <cmath>

int32_t main(void){
    int n;
    std::cin>>n;
    
    std::cout<<std::fixed;
    std::cout.precision(0);

    for(int i=2; i<=n; i+=2) 
        std::cout<<i<<"^2 = "<<pow(i,2)<<std::endl;
}
