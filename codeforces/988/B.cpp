#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int32_t main(void){
    DESYNC;
    int n;
    bool w=false;
    std::vector< std::pair<int,std::string> > v;
    std::string s;

    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>s;
        v.push_back(std::make_pair(s.size(),s));
    }

    std::sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++)
        if(v[i+1].second.find(v[i].second)==std::string::npos){w=true;break;}

    if(w) std::cout<<"NO"<<'\n';
    else{
        std::cout<<"YES"<<'\n';
        for(auto x : v) std::cout<<x.second<<'\n';
    }
}