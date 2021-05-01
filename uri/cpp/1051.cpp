#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double sa,irf=0.00;

    std::cin>>sa;

    if(sa>4500.00){ irf+=(sa-4500)*0.28; sa=4500; }
    if(sa>3000.00){ irf+=(sa-3000)*0.18; sa=3000; }
    if(sa>2000.00) irf+=(sa-2000)*0.08;

    std::cout.precision(2);
    std::cout<<std::fixed;

    if(irf>0.00) std::cout<<"R$ "<<irf<<std::endl;
    else std::cout<<"Isento"<<std::endl;
}
