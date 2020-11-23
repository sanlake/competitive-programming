#include <iostream>

int32_t main(void){
    int quant=0,menor=1000,numero=0,pos=0;
    std::cin>>quant;

    for(int i=0; i<quant; i++){
        std::cin>>numero;
        if(numero<menor){ menor = numero; pos = i+1; } 
    }

    std::cout<<pos<<std::endl;
}
