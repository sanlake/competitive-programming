#include <iostream>

int32_t main(void) {
    int a,b,c;
    std::cin>>a>>b>>c;

    if(a>=b && a>=c)
        if(b>=c) std::cout<<b<<std::endl;
        else std::cout<<c<<std::endl;
    else if(b>=a && b>=c)
        if(a>=c) std::cout<<a<<std::endl;
        else std::cout<<c<<std::endl;
    else if(c>=a && c>=b)
        if(a>=b) std::cout<<a<<std::endl;
        else std::cout<<b<<std::endl;
}
