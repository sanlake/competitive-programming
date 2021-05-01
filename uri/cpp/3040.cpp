#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,a,b,c;
    bool s;

    std::cin>>n;
    while(n--){
    	std::cin>>a>>b>>c;s=true;
	s&=(a>=200 && a<=300);
	s&=(b>=50);
	s&=(c>=150);
  	std::cout<<(s?"Sim":"Nao")<<std::endl;
    }
}
