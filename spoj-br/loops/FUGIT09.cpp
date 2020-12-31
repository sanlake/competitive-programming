#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){
    int n,m,d,x=0,y=0;
    bool a=false;
    char c;

    std::cin>>n>>m;

    while(n-- && std::cin>>c>>d){
        if(c=='N') y+=d;
 	else if(c=='S') y-=d;
	else if(c=='L') x+=d;
	else if(c=='O')	x-=d;
	a|=(std::sqrt(std::pow(x,2)+std::pow(y,2))>m);
    }

    std::cout<<(a?1:0)<<'\n';
}
