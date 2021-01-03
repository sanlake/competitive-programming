#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
	int x,y,X,Y;
	std::cin>>x>>y>>X>>Y;
	std::cout<<abs(X-x)+abs(y-Y)<<'\n';
}
