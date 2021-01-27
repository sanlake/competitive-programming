#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,v,m,l;
    
    while(std::cin>>n){
        m=0;

	for(int i=0; i<n; i++){
	    std::cin>>v;
            if(v>m) m=v;
	}

	if(m<10) l=1;
	else if(m>=20) l=3;
	else l=2;

	std::cout<<l<<std::endl;
    }
}
