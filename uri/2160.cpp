#include <iostream>

int32_t main(void){
    std::string nome;
    getline(std::cin,nome);

    if(nome.size()<=80) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
}
