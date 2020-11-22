#include <iostream>

int32_t main(void){
    int n,r1,r2;
    std::cin>>n;

    for(int i=0; i<n; i++){
	std::cin>>r1>>r2;
        std::cout<<r1+r2<<std::endl;
    }
}
