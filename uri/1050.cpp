#include <iostream>
#include <map>

int32_t main(void){
	int ddd;
	std::map<int, std::string> dc = { 
		{61, "Brasilia"},
	 	{71, "Salvador"},
		{11, "Sao Paulo"},
		{21, "Rio de Janeiro"},
		{32, "Juiz de Fora"},
		{19, "Campinas"},
		{27, "Vitoria"},
		{31, "Belo Horizonte"}	
	};

	std::cin>>ddd;
	std::cout<<dc[ddd]<<std::endl;
	
}
