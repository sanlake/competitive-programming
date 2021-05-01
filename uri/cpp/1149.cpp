#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,n,s=0;
    std::cin>>a;

    while(std::cin>>n && n<=0){}

    for(int i=0; i<n; i++) s+=(a+i);

    std::cout<<s<<std::endl;
}
