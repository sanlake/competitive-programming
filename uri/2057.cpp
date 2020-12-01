#include <iostream>

int32_t main(void){
    int a,b,c;
    std::cin>>a>>b>>c;

    int s=a+b+c;
    if(s<0) s+=24;
    std::cout<<s%24<<std::endl;
}
