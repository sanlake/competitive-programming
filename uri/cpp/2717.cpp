#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,a,b;
    std::cin>>n>>a>>b;
    std::cout<<(a+b<=n?"Farei hoje!":"Deixa para amanha!")<<'\n';
} 
