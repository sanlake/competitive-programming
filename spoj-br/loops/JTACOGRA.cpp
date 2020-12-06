#include <iostream>

int32_t main(void){
    int a=0,b=0,c=0,d=0;
    std::cin>>a;

    for(int i=0; i<a; i++) {
	std::cin>>b>>c;
        d+=(b*c);
    }
    
    std::cout<<d<<std::endl;
}
