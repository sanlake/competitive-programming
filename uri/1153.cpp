#include <iostream>

int32_t main(void){
    int n,s=1;
    std::cin>>n;

    for(int i=n; i>=1; i--) s*=i;

    std::cout<<s<<std::endl;
}
