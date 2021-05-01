#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,r1,r2;
    std::cin>>n;

    for(int i=0; i<n; i++){
	std::cin>>r1>>r2;
        std::cout<<r1+r2<<std::endl;
    }
}
