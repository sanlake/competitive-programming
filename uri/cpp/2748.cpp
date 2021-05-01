#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string palavras[5] = {"Roberto","","5786","","UNIFEI"};
  
    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;

    for(int i=0; i<5; i++){
        std::cout<<"|";
        for(int j=0; j<8; j++) std::cout<<" ";
        std::cout<<palavras[i];
        for(int j=0; j<(39-palavras[i].size()-10); j++) std::cout<<" ";
	std::cout<<"|"<<std::endl;
    }

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;
}
