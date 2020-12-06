#include <iostream>
#include <cmath>

int32_t main(void){
    int a=0,b=0;
    bool s=false;
    
    std::cin>>a;
    b=sqrt(a);

    for(int i=2; i<b+1; i++)
        if(a%i==0) s=true;

    if(s) std::cout<<"nao"<<std::endl;
    else std::cout<<"sim"<<std::endl;
}
