#include <iostream>

int32_t main(void){
    int cv,ce,cs,fv,fe,fs,ponc,ponf;
    std::cin>>cv>>ce>>cs>>fv>>fe>>fs;

    ponc=(cv*3)+ce;
    ponf=(fv*3)+fe;

    if(ponc>ponf) std::cout<<"C"<<std::endl;
    else if(ponc<ponf) std::cout<<"F"<<std::endl;
    else {
        if(cs>fs) std::cout<<"C"<<std::endl;
        else if(cs<fs) std::cout<<"F"<<std::endl;
        else std::cout<<"="<<std::endl;
    }
}
