#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int quant=0,menor=1000,numero=0,pos=0;
    std::cin>>quant;

    for(int i=0; i<quant; i++){
        std::cin>>numero;
        if(numero<menor){ menor = numero; pos = i+1; } 
    }

    std::cout<<pos<<std::endl;
}
