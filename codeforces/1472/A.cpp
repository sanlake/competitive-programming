#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,w,h,t,c,r;
    std::cin>>t;

    while(t--){
        std::cin>>w>>h>>n;c=1;r=1;
        while(!(w&1)){ w/=2; c*=2; }
        while(!(h&1)){ h/=2; r*=2; }
        std::cout<<(c*r>=n?"YES":"NO")<<'\n';
    }
}