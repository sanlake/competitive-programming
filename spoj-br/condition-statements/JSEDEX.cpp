#include <iostream>

int main(void){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;

    if(a<=b && a<=c && a<=d) std::cout<<"S"<<std::endl;
    else std::cout<<"N"<<std::endl;
}
