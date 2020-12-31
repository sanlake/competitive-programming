#include <iostream>

int32_t main(void){
    int n=0,p=0,m=0,t=0, i=0;

    while(std::cin>>n>>p&&n!=0&&p!=0){
        if(n%p==0) m=0;
        else m=1;
        
	t=(n/p)+m;

        std::cout<<"Poo";

        if(t>6){
            for(i=0; i<t-6; i++){
		std::cout<<"o";
                if(i>=13) break;
            }
        }

	std::cout<<"dle"<<'\n';
    }

}
