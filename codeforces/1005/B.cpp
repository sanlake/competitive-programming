#include <iostream>
#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#define int long long

int32_t main(void){
    DESYNC;
    std::string s,t;
    std::cin>>s>>t;

    int i=s.size(),j=t.size(),c=0;
    int ib=i,jb=j;
    while(i*j>0 && s[i-1]==t[j-1]){i--;j--;c++;}

    std::cout<<(ib+jb)-(2*c)<<'\n';
}