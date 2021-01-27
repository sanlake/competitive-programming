#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int hi,hf;
    std::cin>>hi>>hf;

    if(hf<=hi) hf+=24;
    std::cout<<"O JOGO DUROU "<<hf-hi<<" HORA(S)"<<std::endl;
}
