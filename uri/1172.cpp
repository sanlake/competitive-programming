#include <iostream>
#include <vector>

int32_t main(void){
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
