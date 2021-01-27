#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int x;
    std::vector<int> im;
    std::vector<int> pa;

    for(int i=0; i<15; i++){
    	std::cin>>x;

	if(x%2==0) pa.push_back(x);
	else im.push_back(x);

	if(pa.size()==5){
	    for(int j=0; j<5; j++)
		std::cout<<"par["<<j<<"] = "<<pa[j]<<std::endl;
	    pa.clear();
	} else if(im.size()==5){
            for(int j=0; j<5; j++)
	        std::cout<<"impar["<<j<<"] = "<<im[j]<<std::endl;
	    im.clear();
	}
    }

    for(int j=0; j<im.size(); j++)
        std::cout<<"impar["<<j<<"] = "<<im[j]<<std::endl;
    for(int j=0; j<pa.size(); j++)
	std::cout<<"par["<<j<<"] = "<<pa[j]<<std::endl;
}
