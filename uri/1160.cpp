#include <iostream>

int32_t main(void){
    int a,t,pa,pb;
    double g1,g2;
    bool m;

    std::cin>>t;

    for(int i=0; i<t; i++){
	a=0;m=false;
	std::cin>>pa>>pb>>g1>>g2;
	while(pa<=pb){
	    pa*=(1+(g1/100.0));
	    pb*=(1+(g2/100.0));
	    a++;
	    if(a==101) { m=true; break; }
	}
	if(m) std::cout<<"Mais de 1 seculo."<<std::endl;
	else std::cout<<a<<" anos."<<std::endl;
    }
}
