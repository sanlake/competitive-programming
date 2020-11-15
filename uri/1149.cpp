#include <iostream>

int32_t main(void){
    int a,n,s=0;
    std::cin>>a;

    while(std::cin>>n && n<=0){}

    for(int i=0; i<n; i++) s+=(a+i);

    std::cout<<s<<std::endl;
}
