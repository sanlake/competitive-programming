#include <iostream>

int32_t main(void){
	int n,x,I=0;
	std::cin>>n;

	for(int i=0; i<n; i++){
		std::cin>>x;
		if(x>=10 && x<=20) I++;
	}

	std::cout<<I<<" in"<<std::endl;
	std::cout<<n-I<<" out"<<std::endl;
}
