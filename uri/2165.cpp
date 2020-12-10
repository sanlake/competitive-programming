#include <iostream>

int32_t main(void){
    std::string texto;
    getline(std::cin,texto);

    if(texto.size()>140) cout<<"MUTE"<<endl;
    else cout<<"TWEET"<<endl;
}
