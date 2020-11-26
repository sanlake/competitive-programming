#include <iostream>

int32_t main(void){
    int q,n,m;
    std::string p1,p2,e1,e2;

    std::cin>>q;

    for(int i=0; i<q; i++){
        std::cin>>p1>>e1>>p2>>e2;
        std::cin>>n>>m;
        if((n+m)%2==0)
	    if(e1=="PAR") std::cout<<p1<<std::endl;
	    else std::cout<<p2<<std::endl;
	else
            if(e1=="PAR") std::cout<<p2<<std::endl;
	    else std::cout<<p1<<std::endl;
    }
}
