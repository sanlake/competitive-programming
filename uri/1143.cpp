#include <iostream>
#include <cmath>

int32_t main(void){
    int n;
    std::cin>>n;

    for(int i=1; i<=n; i++)
        std::cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<std::endl;
}
