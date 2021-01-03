#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
	int a,b,c,x,y,z;
	std::cin>>a>>b>>c>>x>>y>>z;
	std::cout<<(x/a)*(y/b)*(z/c)<<'\n';
}
