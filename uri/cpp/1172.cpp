#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int n;
    std::vector<int> x;

    for(int i=0; i<10; i++){
    	std::cin>>n;
	if(n>0) x.push_back(n);
	else x.push_back(1);
    }

    for(int i=0; i<10; i++)
	    std::cout<<"X["<<i<<"] = "<<x[i]<<std::endl;
}
