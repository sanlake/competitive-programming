#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,c;
    std::cin>>a>>b>>c;

    if(a>=b && a>=c)
        if(b>=c) std::cout<<b<<'\n';
        else std::cout<<c<<'\n';
    else if(b>=a && b>=c)
        if(a>=c) std::cout<<a<<'\n';
        else std::cout<<c<<'\n';
    else if(c>=a && c>=b)
        if(a>=b) std::cout<<a<<'\n';
        else std::cout<<b<<'\n';
}
