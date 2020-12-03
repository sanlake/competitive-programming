#include <iostream>

int32_t main(void) {
    int a=0,b=0,c=0,d=0,e=0;
    std::cin>>a>>b>>c>>d>>e;

    if(a>b && b>c && c>d && d>e) std::cout<<"D"<<std::endl;
    else if(a<b && b<c && c<d && d<e) std::cout<<"C"<<std::endl;
    else std::cout<<"N"<<std::endl;
}
