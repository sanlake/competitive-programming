#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <map>

int32_t main(void){ DESYNC
    int ddd;
    std::map<int, std::string> dc = { 
        {61, "Brasilia"},
         {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}    
    };

    std::cin>>ddd;
    if(dc.count(ddd)>0) std::cout<<dc[ddd]<<std::endl;
    else std::cout<<"DDD nao cadastrado"<<std::endl;

    
}
