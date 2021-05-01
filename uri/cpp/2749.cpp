#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string palavra="x = 35";
    int quant[5] = {0,0,17,0,33};
    int num=6;

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;

    for(int i=0; i<5; i++){
        if(i==0) num=8;
        else num=6;
	
	std::cout<<"|";
        
	for(int j=0; j<quant[i]-2; j++) std::cout<<" ";
        
	if(quant[i] || (!i)) std::cout<<palavra;
        else std::cout<<"    ";
        
	for(int j=0; j<(39-quant[i]-num); j++) std::cout<<" ";        
	std::cout<<"|"<<std::endl;
    }

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;
}
