#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,x,I=0;
    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>x;
        if(x>=10 && x<=20) I++;
    }

    std::cout<<I<<" in"<<std::endl;
    std::cout<<n-I<<" out"<<std::endl;
}
