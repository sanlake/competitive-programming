#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <string>

int32_t main(void){ DESYNC
    int n,a=0,c=5;
    std::string s;
    std::cin>>n>>s;

    while(s.find("xxx")!=std::string::npos && c>2){
        s.at(s.find("xxx"))='Z';
        a++;
    }
    
    std::cout<<a<<std::endl;
}
