#include <iostream>

int32_t main(void){
    int n;
    double a,b,c;

    std::cin>>n;

    std::cout.precision(1);
    std::cout<<std::fixed;

    for(int i=0; i<n; i++){
        std::cin>>a>>b>>c;
        std::cout<<(a*2+b*3+5*c)/10.0<<std::endl;
    }
}
