#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <vector>

int32_t main(void){
    DESYNC;
    int n,a;

    std::cin>>n;
    std::vector<int> v(n);

    for(int i=0; i<n; i++) std::cin>>v[i];
    for(auto x : v) std::cout<<((x%2!=0)?x:x-1)<<" ";
    
    std::cout<<'\n';
}