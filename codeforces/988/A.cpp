#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int32_t main(void){
    DESYNC;
    int n,k,l,c=0;
    std::cin>>n>>k;

    std::set<int>::iterator itr;
    std::vector<int> v(n);
    std::set<int> s;

    for(int i=0; i<n; i++) std::cin>>v[i];

    for(int i=0; i<n; i++) s.insert(v[i]);

    l=s.size();
    if(l>=k){
        std::cout<<"YES"<<'\n';
        for(itr=s.begin();itr!=s.end() and c<k; ++itr){
            std::cout<<((int)(std::find(v.begin(),v.end(),*itr)-v.begin()))+1<<" ";
            c++;
        }
        std::cout<<'\n';
    }else std::cout<<"NO"<<'\n';
}