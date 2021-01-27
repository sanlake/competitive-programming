#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n=0;
    double aux;
    for(int i=0; i<6; i++){
        std::cin>>aux;
        if(aux>0) n++;
    }

    std::cout<<n<<" valores positivos"<<std::endl;
}
