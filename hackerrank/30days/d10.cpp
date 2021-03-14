#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#define MAX(a,b) (a>b?a:b)
#include <iostream>

int32_t main(void){ DESYNC
    int n,c=0,max=0;
    std::cin>>n;

    while(n>0){
        if(n%2==1) c++;
	else c=0;
	max=MAX(max,c);
	n/=2;
    }

    std::cout<<max<<'\n';
}
