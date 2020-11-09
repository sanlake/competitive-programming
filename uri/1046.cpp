#include <iostream>

int32_t main(void){
    int hi,hf;
    std::cin>>hi>>hf;

    if(hf<=hi) hf+=24;
    std::cout<<"O JOGO DUROU "<<hf-hi<<" HORA(S)"<<std::endl;
}
