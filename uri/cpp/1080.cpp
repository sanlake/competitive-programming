#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int p,m=0,n;
    for(int i=0; i<100; i++){
        std::cin>>n;
        if(n>m){
            m=n;
            p=i+1;
        }
    }

    std::cout<<m<<std::endl<<p<<std::endl;
}
