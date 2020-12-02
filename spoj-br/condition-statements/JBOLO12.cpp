#include <iostream>

int32_t main(void){
    int a,b,c,za,zb,zc;
    std::cin>>a>>b>>c;

    za=a/2;
    zb=b/3;
    zc=c/5;

    if(za<=zb && za<=zc) std::cout<<za<<std::endl;
    else if(zb<=za && zb<=zc) std::cout<<zb<<std::endl;
    else if(zc<=zb && zc<=za) std::cout<<zc<<std::endl;
}
