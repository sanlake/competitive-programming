#include <iostream>

int32_t main(void){
    int t;

    std::cin>>t;
    for(int i=0; i<1000; i++)
	    std::cout<<"N["<<i<<"] = "<<i%t<<std::endl;
}
