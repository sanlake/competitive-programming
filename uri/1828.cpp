#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int quant,maior=0,numero=0;
    std::string op1,op2;
    std::cin>>quant;

    for(int i=0; i<quant; i++){
        std::cin>>op1>>op2;
	std::cout<<"Caso #"<<i+1<<": ";

        if(op1==op2) std::cout<<"De novo!"<<std::endl;
        else if(op1=="tesoura")
            if(op2=="pedra"||op2=="Spock") std::cout<<"Raj trapaceou!"<<std::endl;
            else std::cout<<"Bazinga!"<<std::endl;
        else if(op1=="pedra")
            if(op2=="papel"||op2=="Spock") std::cout<<"Raj trapaceou!"<<std::endl;
            else std::cout<<"Bazinga!"<<std::endl;
        else if(op1=="papel")
            if(op2=="tesoura"||op2=="lagarto") std::cout<<"Raj trapaceou!"<<std::endl;
            else std::cout<<"Bazinga!"<<std::endl;
        else if(op1=="lagarto")
            if(op2=="pedra"||op2=="tesoura") std::cout<<"Raj trapaceou!"<<std::endl;
            else std::cout<<"Bazinga!"<<std::endl;
        else
            if(op2=="lagarto" || op2=="papel") std::cout<<"Raj trapaceou!"<<std::endl;
            else std::cout<<"Bazinga!"<<std::endl;
    }

}
