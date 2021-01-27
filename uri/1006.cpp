#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double a,b,c;
    std::cin>>a>>b>>c;

    c=(a*0.2)+(b*0.3)+(c*0.5); 

    std::cout.precision(1);
    std::cout<<"MEDIA = "<<std::fixed<<c<<std::endl;
}
