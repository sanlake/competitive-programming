#include <iostream>

int32_t main(void){
    int x,z,s=0,c=0;
    std::cin>>x;

    while(std::cin>>z && z<=x) continue;
    while(s<=z) s+=x+(c++);

    std::cout<<c<<std::endl;
}
