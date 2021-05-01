#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>

int32_t main(void){ DESYNC
    double aux;
    std::vector<double> vo,vs;
    
    for(int i=0; i<3; i++){
        std::cin>>aux;
        vo.push_back(aux);
    }

    vs=vo;
    sort(vs.begin(),vs.end());

    for(auto i : vs) std::cout<<i<<std::endl;
    std::cout<<std::endl;
    for(auto i : vo) std::cout<<i<<std::endl;
}
