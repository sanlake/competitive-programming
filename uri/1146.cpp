#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n;
    
    while(std::cin>>n && n!=0){
	std::cout<<"1";
	for(int i=2; i<=n; i++) std::cout<<" "<<i;
	std::cout<<std::endl;
    }
}
