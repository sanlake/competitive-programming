#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <map>

int32_t main(void){ DESYNC
    int n,q;
    std::string name,dep;
    std::map<std::string, int> list = {
                { "bonecos", 0 },
                { "arquitetos", 0 },
                { "desenhistas", 0 },
                { "musicos", 0 } 
    };

    std::cin>>n;

    while(n-- && std::cin>>name>>dep>>q) list[dep]+=q;

    std::cout<<
	    (list["bonecos"]/8)+
	    (list["arquitetos"]/4)+
	    (list["musicos"]/6)+
	    (list["desenhistas"]/12)
    <<'\n';
} 
