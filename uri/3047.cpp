#include <iostream>

#define MAX(a,b) (a>b?a:b)

int32_t main(void){
    int a,b,c,d;
    std::cin>>a>>b>>c;
    d=a-b-c;
    d=MAX(d,b);
    d=MAX(d,c);
    std::cout<<d<<std::endl;
}
