#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,t,k,soma;
    std::cin>>t;

    while(t-- && std::cin>>n) {
	    soma=1-n;
	    while(n-- && std::cin>>k) soma+=k;
	    std::cout<<soma<<'\n';
    }
} 
