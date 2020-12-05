#include <iostream>

int32_t main(void) {
    int a,x,c=1;

    while(std::cin>>a && a!=0)
        for(int i=0;i<a;i++){
            std::cin>>x;
            if(x==(i+1)) {
                std::cout<<"Teste "<<c<<std::endl;
		std::cout<<x<<std::endl<<std::endl;
                c++;
            }
        }
}
