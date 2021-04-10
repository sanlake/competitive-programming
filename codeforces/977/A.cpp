#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,k;
    std::cin>>n>>k;

    while(k--){
        if(n%10==0) n/=10;
	else n--;
    }
    
    std::cout<<n<<std::endl;
}
