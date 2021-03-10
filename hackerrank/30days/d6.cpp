#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <string>

void execute(){
    std::string s;
    std::cin>>s;

    for(int i=0; i<s.size(); i+=2) std::cout<<s[i]; std::cout<<' ';
    for(int i=1; i<s.size(); i+=2) std::cout<<s[i]; std::cout<<'\n';
}

int32_t main(void){ DESYNC
    int n;
    std::cin>>n;

    for(int j=0; j<n; j++) execute();
}
