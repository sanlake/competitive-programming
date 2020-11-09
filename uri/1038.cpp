#include <iostream>
#include <vector>

int32_t main(void){
    int n,q;
    std::vector<double> p={4.00,4.50,5.00,2.00,1.50};
    
    std::cin>>n>>q;

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<"Total: R$ "<<q*p[n-1]<<std::endl;
}
