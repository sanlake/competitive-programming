#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int a,g,d,n;
    std::vector<int> p = {0,0,0};

    while(std::cin>>n && n!=4)
        if(n<=4 && n>=1) p[n-1]++;

    std::cout<<"MUITO OBRIGADO"<<std::endl;
    std::cout<<"Alcool: "<<p[0]<<std::endl;
    std::cout<<"Gasolina: "<<p[1]<<std::endl;
    std::cout<<"Diesel: "<<p[2]<<std::endl;
}
