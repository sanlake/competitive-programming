#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <algorithm>

int32_t main(void){
    DESYNC;
    int n;
    std::string s;
    std::cin>>n>>s;

    for(int i=2; i<=n; i++)
        if(n%i==0) std::reverse(s.begin(),s.begin()+i);
    
    std::cout<<s<<'\n';

}