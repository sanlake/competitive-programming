#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <string>
#include <vector>
#include <set>

int32_t numberOfMoves(int n, std::string s, std::string t){ DESYNC
    char a1,a2;
    std::vector<int> m;
    std::set<char> s1,s2;
    
    for(int i=0; i<n; i++){
        s1.insert(s[i]);
        s2.insert(t[i]);
    }

    if(s1!=s2) return -1;
    else if(s.compare(t)==0) return 0;

    for(int i=0; i<n; i++) if(s[i]!=t[i]){ int b=i; break; }

    for(int i=n-1; i>=b; i++){
        if(s[i]==t[i]) continue;
        int w = s.find()
    }



    return -1;
}

int32_t main(void){
    int n;
    std::string s,t;
    std::cin>>n>>s>>t;
    std::cout<<numberOfMoves(n,s,t)<<'\n';
}