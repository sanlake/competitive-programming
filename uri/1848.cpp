#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
    int n;
    std::string s;

    for(int i=0; i<3; i++){
	n=0;
        while(std::cin>>s && s!="caw"){
	    for(int j=0; j<3; j++) 
		if(s[j]=='*') n+=pow(2,2-j);
	}std::cin>>s;

	if(n>1000) n=1000;
	std::cout<<n<<std::endl;
    }
}
