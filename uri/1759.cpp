#include <iostream>

int32_t main(void){
    int n;
    std::cin>>n;

    if(n>=1) std::cout<<"Ho";

    for(int i=1; i<n; i++) std::cout<<" Ho";

    std::cout<<"!"<<std::endl;
}
