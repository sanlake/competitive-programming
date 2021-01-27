#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int t;

    std::cin>>t;
    for(int i=0; i<1000; i++)
	    std::cout<<"N["<<i<<"] = "<<i%t<<std::endl;
}
