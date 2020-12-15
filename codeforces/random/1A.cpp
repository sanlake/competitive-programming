#include <iostream>
#include <cmath>

int32_t main(void){
    int n,m,a;
    std::cin>>n>>m>>a;
    std::cout<<ceil(n-a)+ceil(m-a)<<std::endl;
}
