#include <iostream>

int32_t main(void){
    double a,b,c;
    std::cin>>a>>b>>c;

    c=(a*0.2)+(b*0.3)+(c*0.5); 

    std::cout.precision(1);
    std::cout<<"MEDIA = "<<std::fixed<<c<<std::endl;
}
