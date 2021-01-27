#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    double x;
    std::vector<double> a;

    for(int i=0; i<100; i++){
    	std::cin>>x;
	a.push_back(x);
    }

    std::cout.precision(1);
    std::cout<<std::fixed;
    	
    for(int i=0; i<100; i++)
        if(a[i]<=10)
	    std::cout<<"A["<<i<<"] = "<<a[i]<<std::endl;
}
