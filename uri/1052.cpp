#include <iostream>
#include <vector>

int32_t main(void){
	int n;
	std::vector<std::string> m = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	std::cin>>n;
	std::cout<<m[n-1]<<std::endl;
}
