#include <iostream>

int32_t main(void){
    int x,y;
    std::cin>>x>>y;

    for(int i=1; i<=y; i++){
    	std::cout<<i;
	if(i%x==0) std::cout<<std::endl;
	else std::cout<<" ";
    }
}
