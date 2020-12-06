#include <iostream>

int32_t main(void){
    int l,c,s,e,i,so=0;
    bool p=false;
    std::cin>>l>>c;

    for(i=0;i<l;i++) {
	std::cin>>s>>e;
        so+=(e-s);
        if(so>c) p=true;
    }

    if(p) std::cout<<"S"<<std::endl;
    else std::cout<<"N"<<std::endl;
}
