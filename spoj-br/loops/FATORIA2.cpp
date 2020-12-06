#include <iostream>

int32_t main(void){
    int a,t=1;
    std::cin>>a;

    for(int i=a;i>1;i--) t*=i;
    
    std::cout<<t<<std::endl;
}
