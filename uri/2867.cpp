#include <iostream>
#include <cmath>

int32_t main(void){
    int q,a,b,c;
    std::cin>>q;
    
    for(int i=0; i<q; i++){
        c=1;
	std::cin>>a>>b;
	std::cout<<int(b*(log10(a)))+1<<std::endl;
    }

}
