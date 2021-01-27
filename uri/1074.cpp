#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,x;
    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>x;
        if(x==0){
            std::cout<<"NULL"<<std::endl;
            continue;
        }
        else if(x%2==0) std::cout<<"EVEN ";
        else std::cout<<"ODD ";

        if(x>0) std::cout<<"POSITIVE";
        else std::cout<<"NEGATIVE";

        std::cout<<std::endl;
    }
}
