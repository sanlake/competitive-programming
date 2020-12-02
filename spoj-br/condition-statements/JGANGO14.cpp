#include <iostream>

int32_t main(void) {
    int a,b,c,d,e,f;
    std::cin>>a>>b>>c>>d;

    e=a*b;
    f=c*d;

    if(e>f) std::cout<<"-1"<<std::endl;
    else if(e<f) std::cout<<"1"<<std::endl;
    else std::cout<<"0"<<std::endl;
}
