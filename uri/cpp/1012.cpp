#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double a,b,c,pi=3.14159;
    std::cin>>a>>b>>c;

    std::cout.precision(3);
    std::cout<<std::fixed;
    std::cout<<"TRIANGULO: "<<(a*c)/2.0<<std::endl;
    std::cout<<"CIRCULO: "<<pi*c*c<<std::endl;
    std::cout<<"TRAPEZIO: "<<(a+b)*c*(1/2.0)<<std::endl;
    std::cout<<"QUADRADO: "<<b*b<<std::endl;
    std::cout<<"RETANGULO: "<<a*b<<std::endl;
}
