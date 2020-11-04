#include <iostream>

int32_t main(void){
	int n;
	std::cin>>n;

	for(int i=1; i<=10; i++)
		std::cout<<i<<" x "<<n<<" = "<<i*n<<std::endl;
}
