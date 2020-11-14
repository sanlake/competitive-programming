#include <iostream>

int32_t main(void){
    int n;
    
    while(std::cin>>n && n!=0){
	std::cout<<"1";
	for(int i=2; i<=n; i++) std::cout<<" "<<i;
	std::cout<<std::endl;
    }
}
