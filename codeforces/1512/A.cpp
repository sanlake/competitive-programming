#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>

int32_t main(void){ DESYNC
    int n,t,a,w;
    std::cin>>t;

    while(t--){
        std::cin>>n;
        std::vector<int> v(n),vb;
        for(int i=0;i<n;i++) std::cin>>v[i];

        vb=v;        
        std::sort(v.begin(),v.end());

        if(v[0]!=v[1]) w=v[0];
        else w=v[v.size()-1];

        for(int i=0; i<n; i++)
            if(vb[i]==w){
                std::cout<<i+1<<'\n';
                break;
            }
    }
}
