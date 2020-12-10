#include <iostream>

int32_t main(void){
    std::string texto;
    getline(std::cin,texto);

    if(texto.size()>140) std::cout<<"MUTE"<<std::endl;
    else std::cout<<"TWEET"<<std::endl;
}
