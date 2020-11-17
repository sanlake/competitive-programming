#include <iostream>

int32_t main(void){
    int n,s=0;
    while(std::cin>>n && n!=0){
    	if(n%2!=0) n++;
	for(int i=n; i<10+n; i+=2) s+=i;
	std::cout<<s<<std::endl;
	s=0;
    }
}
