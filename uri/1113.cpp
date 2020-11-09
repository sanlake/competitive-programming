#include <iostream>

int32_t main(void){
    int x,y;
    while(std::cin>>x>>y && x!=y)
        if(x>y) std::cout<<"Decrescente"<<std::endl;
        else std::cout<<"Crescente"<<std::endl;
}
