#include <iostream>

int32_t main(void){
    double a,g,Ra,Rg,al,ga;
    std::cin>>a>>g>>Ra>>Rg;

    al=a/Ra;
    ga=g/Rg;

    if(al<ga) std::cout<<"A"<<std::endl;
    else std::cout<<"G"<<std::endl;
}
