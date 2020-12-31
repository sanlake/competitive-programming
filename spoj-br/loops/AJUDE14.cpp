#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,c,s,g;
    std::cin>>n;

    while(n--){
        std::cin>>c;
	s+=c;
    }

    std::cin>>g;
    std::cout<<(s==g?"Acertou":"Errou")<<'\n';
}
