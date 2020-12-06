#include <iostream>

int32_t main(void){
    int a=0,b=0,c=0,d=0,e=0,i=0;
    std::string n;

    while(std::cin>>d && d!=0) {
        for (i = 0; i < d; i++) {
	    std::cin>>a>>b;
            c+=a-b;
        }
        
	if(c>0) n="Aldo";
	else n="Beto";

	std::cout<<"Teste "<<++e<<std::endl<<n<<std::endl;
	std::cout<<std::endl;
        c=0;
    }
}
