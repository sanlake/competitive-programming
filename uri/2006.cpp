#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int s=0,c,n;
    std::cin>>n;

    for(int i=0; i<5; i++){
        std::cin>>c;
        if(c==n) s++;
    }

    std::cout<<s<<std::endl;
}
