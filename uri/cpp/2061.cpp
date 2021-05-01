#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int N,M;
    std::string a;

    std::cin>>N>>M;

    for(int i=0; i<M; i++){
        std::cin>>a;
        if(a[0]=='f') N++;
        else N--;
    }
  
    std::cout<<N<<std::endl;
}
