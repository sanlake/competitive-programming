#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int q;
    std::string p;

    std::cin>>q;
    std::cin.ignore();

    for(int i=0; i<q; i++){
        getline(std::cin,p);
	std::cout<<"gzuz"<<std::endl;
   }
}
