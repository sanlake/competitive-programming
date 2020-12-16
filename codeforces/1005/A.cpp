#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <vector>

int32_t main(void){
    DESYNC;
    int n,p,s=0,l=0;
    std::vector<int> v;

    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>p;
        if(p==1){
            s++;
            if(i!=0) v.push_back(l);
        }
        if(i==n-1) v.push_back(p);
        l=p;
    }

    std::cout<<s<<'\n';
    for(auto x : v) std::cout<<x<<" ";
    std::cout<<'\n';
}