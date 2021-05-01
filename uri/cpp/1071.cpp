#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
    int x,y,s=0,t;
    std::cin>>x>>y;
    
    if(x>y) { t=x; x=y; y=t; }
    if(x%2!=0) x++;

    for(int i=x+1; i<y; i+=2) s+=i;

    std::cout<<s<<std::endl;
}
