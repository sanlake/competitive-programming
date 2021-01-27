#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,y,aux;
    std::cin>>x>>y;

    if(x>y) { aux=x;x=y;y=aux; }

    for(int i=x+1; i<y; i++)
        if(i%5==2 || i%5==3) std::cout<<i<<std::endl;
}
