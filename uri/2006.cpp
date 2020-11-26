#include <iostream>

int32_t main(void){
    int s=0,c,n;
    std::cin>>n;

    for(int i=0; i<5; i++){
        std::cin>>c;
        if(c==n) s++;
    }

    std::cout<<s<<std::endl;
}
