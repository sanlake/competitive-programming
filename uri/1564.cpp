#include <iostream>

int32_t main(void){
    int q;

    while(std::cin>>q)
        if(q>0) std::cout<<"vai ter duas!"<<std::endl;
	else std::cout<<"vai ter copa!"<<std::endl;
}
