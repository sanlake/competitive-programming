#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;
  
    for(int j=0; j<5; j++){
        std::cout<<"|";
        for(int i=0; i<37; i++) std::cout<<" ";
	    std::cout<<"|"<<std::endl;
    }

    for(int i=0; i<39; i++) std::cout<<"-";    
    std::cout<<std::endl;
}
