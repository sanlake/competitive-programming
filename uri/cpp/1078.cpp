#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n;
    std::cin>>n;

    for(int i=1; i<=10; i++)
        std::cout<<i<<" x "<<n<<" = "<<i*n<<std::endl;
}
