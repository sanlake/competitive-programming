#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string texto;
    getline(std::cin,texto);

    if(texto.size()>140) std::cout<<"MUTE"<<std::endl;
    else std::cout<<"TWEET"<<std::endl;
}
