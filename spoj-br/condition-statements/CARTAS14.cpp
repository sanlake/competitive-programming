#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a=0,b=0,c=0,d=0,e=0;
    std::cin>>a>>b>>c>>d>>e;

    if(a>b && b>c && c>d && d>e) std::cout<<"D"<<'\n';
    else if(a<b && b<c && c<d && d<e) std::cout<<"C"<<'\n';
    else std::cout<<"N"<<'\n';
}
