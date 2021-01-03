#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
	int n;
	std::cin>>n;
	std::cout<<n*n<<'\n';
}
