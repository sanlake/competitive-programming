#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int q;

    while(std::cin>>q)
        if(q>0) std::cout<<"vai ter duas!"<<std::endl;
	else std::cout<<"vai ter copa!"<<std::endl;
}
