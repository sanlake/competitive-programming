#include <iostream>
#include <cmath>

int32_t main(void){
    int a,b,c,M;
    std::cin>>a>>b>>c;

    M=(a+b+abs(a-b))/2;
    std::cout<<(M+c+abs(M-c))/2<<" eh o maior"<<std::endl;
}
