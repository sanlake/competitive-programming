#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,x,y;
    std::cin>>n;
    
    std::cout.precision(1);
    std::cout<<std::fixed;

    for(int i=0; i<n; i++){
        std::cin>>x>>y;
        if(y==0) std::cout<<"divisao impossivel"<<std::endl;
        else std::cout<<(double)x/y<<std::endl;
    }
}
