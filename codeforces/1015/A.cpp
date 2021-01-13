#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <set>

int32_t main(void){ DESYNC
    int n,m,l,r;
    std::cin>>n>>m;

    std::set<int> s;

    while(n--){
        std::cin>>l>>r;
        for(int i=l; i<=r; i++) s.insert(i);
    }

    std::cout<<m-s.size()<<'\n';

    for(int i=1; i<=m; i++) if(s.count(i)==0) std::cout<<i<<' ';

    std::cout<<'\n';
}