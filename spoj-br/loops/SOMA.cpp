#include <iostream>

int32_t main(void){
    int a,x,s=0;
    std::cin>>a;
    
    for(int i=0;i<a;i++){
        std::cin>>x;
        s+=x;
    }

    std::cout<<s<<std::endl;
}
