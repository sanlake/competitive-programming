#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
	int l,n;
	std::cin>>l>>n;
	
	std::cout.precision(0);
	std::cout<<std::fixed;
	std::cout<<pow(l-n+1,2)+n-1<<'\n';
}
