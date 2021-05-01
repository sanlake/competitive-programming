#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int n,q;
    std::vector<double> p={4.00,4.50,5.00,2.00,1.50};
    
    std::cin>>n>>q;

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<"Total: R$ "<<q*p[n-1]<<std::endl;
}
