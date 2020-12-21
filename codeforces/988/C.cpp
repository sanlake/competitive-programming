#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

int32_t main(void){ DESYNC
    int n,k,s;
    std::vector< std::pair<int,std::pair<int,int>> > r;

    std::cin>>k;
    for(int i=0; i<k; i++){
        std::cin>>n;s=0;
        std::vector<int> v(n);
        for(int j=0; j<n; j++) {std::cin>>v[j];s+=v[j];}
        for(int j=0; j<n; j++) r.push_back(std::make_pair(s-v[j], std::make_pair(i+1,j+1)));
    }

    std::sort(r.begin(),r.end());

    int xf=-1,xi=-1,xj=-1;
    for(auto x : r){
        if(x.first==xf&&x.second.first!=xi) {std::cout<<"YES\n"<<x.second.first<<" "<<x.second.second<<'\n'<<xi<<" "<<xj<<'\n';return 0;}
        else {xf=x.first;xi=x.second.first;xj=x.second.second;}
    }

    std::cout<<"NO\n";
}