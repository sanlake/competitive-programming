#include <iostream>

int32_t main(void){
    int n,k;
    std::cin>>n>>k;

    while(k--){
        if(n%10==0) n/=10;
	else n--;
    }
    
    std::cout<<n<<std::endl;
}