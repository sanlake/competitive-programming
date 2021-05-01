#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
    int a,b,c,M;
    std::cin>>a>>b>>c;

    M=(a+b+abs(a-b))/2;
    std::cout<<(M+c+abs(M-c))/2<<" eh o maior"<<std::endl;
}
