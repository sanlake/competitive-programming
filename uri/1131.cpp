#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int ri,rg,i=0,g=0,e=0,s;
    
    do{
        std::cin>>ri>>rg;
        std::cout<<"Novo grenal (1-sim 2-nao)"<<std::endl;
        if(ri>rg) i++;
        else if(ri<rg) g++;
        else e++;
    }while(std::cin>>s && s!=2);

    std::cout<<i+g+e<<" grenais"<<std::endl;
    std::cout<<"Inter:"<<i<<std::endl;
    std::cout<<"Gremio:"<<g<<std::endl;
    std::cout<<"Empates:"<<e<<std::endl;
    
    if(i>g) std::cout<<"Inter venceu mais"<<std::endl;
    else if(i<g) std::cout<<"Gremio venceu mais"<<std::endl;
    else std::cout<<"Nao houve vencedor"<<std::endl;
}
