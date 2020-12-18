#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

bool cmp(std::pair<int, int>& a, std::pair<int, int>& b){ 
    return a.first > b.first; 
} 

int32_t main(void){
    DESYNC;
    int n,k,s=0;

    std::cin>>n>>k;
    std::vector<int> v(n),p;
    std::vector< std::pair<int,int> > vp;

    for(int i=0; i<n; i++) std::cin>>v[i];

    for(int i=0; i<n; i++) vp.push_back(std::make_pair(v[i],i));
    std::sort(vp.begin(),vp.end(),cmp);

    for(int i=0; i<k; i++) p.push_back(vp[i].second);
    std::sort(p.begin(),p.end());
    
    for(int i=0; i<k; i++) s+=v[p[i]++];
    std::cout<<s<<'\n';

    p[k-1]=n;

    for(int i=0; i<k; i++) std::cout<<(i==0?p[i]:p[i]-p[i-1])<<" ";
    std::cout<<'\n';
}