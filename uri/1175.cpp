#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,n[20];

    for(int i=0; i<20; i++){
    	std::cin>>x;
	n[i]=x;
    }

    for(int i=19; i>=0; i--)
    	std::cout<<"N["<<19-i<<"] = "<<n[i]<<std::endl;

}
