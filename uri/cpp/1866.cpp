#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,q;
    std::cin>>q;

    for(int i=0; i<q; i++){
	std::cin>>x;
        if(x%2==0) std::cout<<0<<std::endl;
        else std::cout<<1<<std::endl;
    }

}
