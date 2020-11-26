#include <iostream>

int32_t main(void){
    int n=0;
    long long int ano=0, res=0;
    bool ativo;

    std::cin>>n;

    for(int i=0; i<n; i++){
	std::cin>>ano;

        if(ano>=2015){
            res = ano - 2014;
            ativo = true;
        }else{
            res = 2015 - ano;
            ativo = false;
        }

        std::cout<<res<<" ";

        if(ativo) std::cout<<"A";
        else std::cout<<"D";

        std::cout<<".C."<<std::endl;
    }
}
