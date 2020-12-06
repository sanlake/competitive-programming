#include <iostream>

int32_t main(void){
    int a,b,c,d=0;
    std::cin>>a;

    for(int i=0; i<a; i++) {
	std::cin>>b>>c;
        if(b>c) d+=c;
    }
    
    std::cout<<d<<std::endl;
}
