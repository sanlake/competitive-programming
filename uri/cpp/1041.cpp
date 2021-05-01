#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double x,y;
    std::cin>>x>>y;

    if(x==0.0 && y!=0.0) std::cout<<"Eixo Y"<<std::endl;
    else if(y==0.0 && x!=0.0) std::cout<<"Eixo X"<<std::endl;
    else if(x>0 && y>0) std::cout<<"Q1"<<std::endl;
    else if(x>0 && y<0) std::cout<<"Q4"<<std::endl;
    else if(x<0 && y>0) std::cout<<"Q2"<<std::endl;
    else if(x<0 && y<0) std::cout<<"Q3"<<std::endl;
    else std::cout<<"Origem"<<std::endl;
}
