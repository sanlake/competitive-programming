#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int factorial(int n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}

int32_t main(void){ DESYNC
    int n;
    std::cin>>n;
    std::cout<<factorial(n)<<'\n';
}
