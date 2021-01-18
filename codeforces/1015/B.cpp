#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

void swap_positions(int a, int b, std::string &t, std::vector<int> &m){
    m.push_back(a);
    
}

int32_t sequence_of_moves(int n, std::string s, std::string t){
    int b;
    char a1,a2;
    std::string s1,s2;
    std::vector<int> m;
    std::vector<std::string> ss{s,t};

    for(int i=0; i<2; i++) std::sort(ss[i].begin(),ss[i].end());

    if(ss[0].compare(ss[1])!=0) return -1;
    else if(s.compare(t)==0) return 0;

    for(int i=0; i<n; i++) if(s[i]!=t[i]){ b=i; break; }

    for(int i=b; i<=n; i++){
        if(s[i]==t[i]) continue;
        int w = t.find_first_of(s[i],i);
        //std::cout<<b<<" "<<w<<" "<<s[i]<<'\n';
        swap_positions(i,w,t,m);
        if(w==-1) return 2;
    }

    return -1;
}

int32_t main(void){ DESYNC
    int n;
    std::string s,t;
    std::cin>>n>>s>>t;
    std::cout<<sequence_of_moves(n,s,t)<<'\n';
}