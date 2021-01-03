#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,c,za,zb,zc;
    std::cin>>a>>b>>c;

    za=a/2;
    zb=b/3;
    zc=c/5;

    if(za<=zb && za<=zc) std::cout<<za<<'\n';
    else if(zb<=za && zb<=zc) std::cout<<zb<<'\n';
    else if(zc<=zb && zc<=za) std::cout<<zc<<'\n';
}
