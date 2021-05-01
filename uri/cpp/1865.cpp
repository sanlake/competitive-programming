#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int op2,q;
    std::string op1;
    std::cin>>q;

    for(int i=0; i<q; i++){
	std::cin>>op1>>op2;
        if(op1=="Thor") std::cout<<"Y"<<std::endl;
        else std::cout<<"N"<<std::endl;
    }
}
