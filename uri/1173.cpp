#include <iostream>

int32_t main(void){
    int n;
    std::cin>>n;

    for(int i=0; i<10; i++){
        std::cout<<"N["<<i<<"] = "<<n<<std::endl;
	n*=2;
    }

}
