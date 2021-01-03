#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,c,d,e,f;
    std::cin>>a>>b>>c>>d;

    e=a*b;
    f=c*d;

    if(e>f) std::cout<<"-1"<<'\n';
    else if(e<f) std::cout<<"1"<<'\n';
    else std::cout<<"0"<<'\n';
}
