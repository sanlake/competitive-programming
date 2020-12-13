#include <iostream>

int32_t main(void){
    int q,n,s,t=0;
    std::cin>>q;

    while(q--){
        s=0;
        for(int i=0; i<3; i++){
            std::cin>>n;
            s+=n;
        }
        if(s>1) t++;
    }
    
    std::cout<<t<<std::endl;
}