#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
	int l,d,k,p;
	std::cin>>l>>d>>k>>p;
	std::cout<<(l*k)+((l/d)*p)<<'\n';
}
