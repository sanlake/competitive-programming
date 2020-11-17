#include <iostream>

int32_t main(void){
    int n;
    std::cin>>n;

    for(int i=1; i<=n; i++)
        if(n%i==0) std::cout<<i<<std::endl;
}
