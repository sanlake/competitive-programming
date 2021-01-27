#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <map>

int32_t main(void){ DESYNC
    int n;
    char c;
    std::string s;
    std::map<char,int> m;

    std::cin>>n;
    while(n--){ 
        std::cin>>s>>c;
        m[c]++;
    }

    std::cout<<m.at('M')<<" carrinhos"<<std::endl;
    std::cout<<m.at('F')<<" bonecas"<<std::endl;
}