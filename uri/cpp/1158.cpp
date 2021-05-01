#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,x,y,s=0;
    std::cin>>n;

    for(int i=0; i<n; i++){
	s=0;
        std::cin>>x>>y;
        
	if(x%2==0) x++;
       
	for(int j=x; j<(2*y)+x; j+=2) s+=j;	
	
	std::cout<<s<<std::endl;
    }
}
