#include <iostream>
#include <cmath>

int32_t main(void){
    int n;
    std::cin>>n;

    std::cout.precision(0);
    std::cout<<std::fixed;
    for(int i=1; i<=n; i++){
        std::cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<std::endl;
        std::cout<<i<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<std::endl;
    }
}
