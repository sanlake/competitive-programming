#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <algorithm>
#include <vector>

int32_t main(void){ DESYNC
    int n,a,t,ans=0;
    bool f;
    std::cin>>t;

    while(t--){
        std::cin>>n;
        std::vector<int> v(n);
        f=false;

        for(int i=0; i<n; i++) std::cin>>v[i];

        std::sort(v.begin(),v.end());

        for(int i=0; i<n-1; i++) f|=(v[i]+1==v[i+1]);

        if(!f) ans=1;
        else ans=2;

        std::cout<<ans<<'\n';
    }
}

// 1 2 3 4 5
// 1 3 5
// 2 4