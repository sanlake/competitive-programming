#include <iostream>

int32_t main(void){
    for(int j=60; j>=0; j-=5)
        std::cout<<"I="<<((12-(j/5))*3)+1<<" J="<<j<<std::endl;
}
