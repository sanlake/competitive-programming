#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

#include <iostream>

int32_t main(void){ DESYNC
    int n;
    std::string p;
    
    std::cin>>n;
    std::cin.ignore();

    for(int i=0; i<n; i++){
        std::cin>>p;
	if(p.size()>10) std::cout<<p.front()<<p.size()-2<<p.back()<<std::endl;
	else std::cout<<p<<'\n';
    }
}
