#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,s=1,o=0,t=0;

    std::cin>>n;
    std::cout<<"0";

    if(n>1) std::cout<<" 1";

    for(int i=1; i<n-1; i++){
    	t=o+s;
	std::cout<<" "<<t;
	o=s;s=t;
    }

    std::cout<<std::endl;

}
