#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,y;
    std::cin>>x>>y;

    for(int i=1; i<=y; i++){
    	std::cout<<i;
	if(i%x==0) std::cout<<std::endl;
	else std::cout<<" ";
    }
}
