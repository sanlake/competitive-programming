#include <iostream>

int32_t main(void){
    int q,p;
    std::cin>>q;

    for(int i=0; i<q; i++){
        std::cin>>p;
        if(p>8000) std::cout<<"Mais de 8000!"<<std::endl;
        else std::cout<<"Inseto!"<<std::endl;
    }
}
