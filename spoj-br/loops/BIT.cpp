#include <iostream>

int32_t main(void){
    int b=1,c=0,d=0,e=0,f=0;
  
    while(std::cin>>c && c!=0){
        if(c>=50){d=c/50;c=c-(d*50);}
        if(c>=10){e=c/10;c=c-(e*10);}
        if(c>=5){f=c/5;c=c-(f*5);}

	std::cout<<"Teste "<<b<<std::endl;
	std::cout<<d<<" "<<e<<" "<<f<<" "<<c<<std::endl;
        
	b++;
        
	d=0;e=0;f=0;
	std::cout<<std::endl;
    }
}
