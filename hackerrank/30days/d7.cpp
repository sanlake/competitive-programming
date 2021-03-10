#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int n;
    std::cin>>n;
    std::vector<int> v(n);

    for(int i=0; i<n; i++) std::cin>>v[i];
    for(int i=v.size()-1; i>=0; i--) std::cout<<v[i]<<" ";
    
    std::cout<<'\n';    
}
