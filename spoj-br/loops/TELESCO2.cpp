#include <iostream>

int32_t main(void){
    long long int a,b,c,d=0;
    std::cin>>a>>b;

    for(int i=0; i<b; i++){
        std::cin>>c;
        if((c*a)>=40000000) d+=1;
    }
    
    std::cout<<d<<std::endl;
}
