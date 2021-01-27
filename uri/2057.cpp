#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,c;
    std::cin>>a>>b>>c;

    int s=a+b+c;
    if(s<0) s+=24;
    std::cout<<s%24<<std::endl;
}
