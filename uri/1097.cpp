#include <iostream>

int32_t main(void){
    for(int i=1; i<=9; i+=2)
        for(int j=7+i-1; j>=5+i-1; j--)
            std::cout<<"I="<<i<<" J="<<j<<std::endl;
}
