#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
	int t1,t2,t3,t4;
	std::cin>>t1>>t2>>t3>>t4;
	std::cout<<t1+t2+t3+t4-3<<'\n';
}
