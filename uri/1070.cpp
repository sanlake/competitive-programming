#include <iostream>

int32_t main(void){
    int x;
    std::cin>>x;
    
    if(x%2==0) x++;

    for(int i=x; i<=x+11; i+=2) std::cout<<i<<std::endl;
}
