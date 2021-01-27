#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string nome;
    getline(std::cin,nome);

    if(nome.size()<=80) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
}
