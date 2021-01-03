#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int cv,ce,cs,fv,fe,fs,ponc,ponf;
    std::cin>>cv>>ce>>cs>>fv>>fe>>fs;

    ponc=(cv*3)+ce;
    ponf=(fv*3)+fe;

    if(ponc>ponf) std::cout<<"C"<<'\n';
    else if(ponc<ponf) std::cout<<"F"<<'\n';
    else {
        if(cs>fs) std::cout<<"C"<<'\n';
        else if(cs<fs) std::cout<<"F"<<'\n';
        else std::cout<<"="<<'\n';
    }
}
