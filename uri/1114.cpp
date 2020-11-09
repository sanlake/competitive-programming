#include <iostream>

int32_t main(void){
	std::string t,s="2002";
	while(std::cin>>t)
		if(t==s){std::cout<<"Acesso Permitido"<<std::endl;break;}
		else std::cout<<"Senha Invalida"<<std::endl;
}
