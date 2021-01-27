#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int q;
    double n=0,nM=-1;
    std::string m,mM;

    std::cin>>q;

    for(int i=0; i<q; i++){
        std::cin>>m>>n;
        if(nM<n){ nM=n;mM=m; }
    }

    if(nM<8) std::cout<<"Minimum note not reached"<<std::endl;
    else std::cout<<mM<<std::endl;
}
