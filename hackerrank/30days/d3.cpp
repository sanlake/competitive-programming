#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n;
    bool w=false;
    std::cin>>n;

    w|=(n%2!=0);
    w|=(n>=6 && n<=20);

    if(w) std::cout<<"Weird"<<'\n';
    else std::cout<<"Not Weird"<<'\n';

}
