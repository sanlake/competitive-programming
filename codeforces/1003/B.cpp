#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,x;
    std::cin>>a>>b>>x;

    if(x&1)
        if(a>b){
            for(int i=0; i<x/2; i++) std::cout<<"01";
            std::cout<<std::string(a-x/2,'0');
            std::cout<<std::string(b-x/2,'1');
        }else{
            for(int i=0; i<x/2; i++) std::cout<<"10";
            std::cout<<std::string(b-x/2,'1');
            std::cout<<std::string(a-x/2,'0');
        }
    else
        if(a>b){
            for(int i=0; i<x/2; i++) std::cout<<"01";
            std::cout<<std::string(b-x/2,'1');
            std::cout<<std::string(a-x/2,'0');
        }else{
            for(int i=0; i<x/2; i++) std::cout<<"10";
            std::cout<<std::string(a-x/2,'0');
            std::cout<<std::string(b-x/2,'1');
        }
    
    std::cout<<'\n';
}