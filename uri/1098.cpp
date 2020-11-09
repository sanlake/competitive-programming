#include <iostream>

int32_t main(void){
    for(double i=0; i<=2; i+=0.2)
        for(int j=1; j<=3; j++)
            std::cout<<"I="<<i<<" J="<<j+i<<std::endl;
}
