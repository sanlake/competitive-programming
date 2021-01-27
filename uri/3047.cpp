#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

#define MAX(a,b) (a>b?a:b)

int32_t main(void){ DESYNC
    int a,b,c,d;
    std::cin>>a>>b>>c;
    d=a-b-c;
    d=MAX(d,b);
    d=MAX(d,c);
    std::cout<<d<<std::endl;
}
