#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

#include <iostream>

int32_t main(void){ DESYNC
    int q,n,s,t=0;
    std::cin>>q;

    while(q--){
        s=0;
        for(int i=0; i<3; i++){
            std::cin>>n;
            s+=n;
        }
        if(s>1) t++;
    }
    
    std::cout<<t<<'\n';
}
