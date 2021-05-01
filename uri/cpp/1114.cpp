#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string t,s="2002";
    while(std::cin>>t)
        if(t==s){std::cout<<"Acesso Permitido"<<std::endl;break;}
        else std::cout<<"Senha Invalida"<<std::endl;
}
