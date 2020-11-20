#include <iostream>
#include <cmath>

int32_t main(void){
    double n;

    std::cin>>n;
	
    std::cout.precision(4);
    std::cout<<std::fixed;

    for(int i=0; i<100; i++)
        std::cout<<"N["<<i<<"] = "<<n/pow(2.0,i)<<std::endl;

}
