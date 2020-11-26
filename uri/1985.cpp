#include <iostream>

int32_t main(void){
    int n,q,c;
    double s=0.0;

    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>c;
        std::cin>>q;
        s+=(q*((c-1000)+0.50));
    }

    std::cout<<std::fixed;
    std::cout.precision(2);
    std::cout<<s<<std::endl;
}
