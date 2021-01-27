#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int s=0,a,b,aux;
    std::cin>>a>>b;

    if(a>b){ aux=a;a=b;b=aux; } 

    for(int i=a; i<=b; i++)
        if(i%13!=0)s+=i;

    std::cout<<s<<std::endl;
}
