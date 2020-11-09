#include <iostream>

int32_t main(void){
    int n=0,aux;
    
    for(int i=0; i<5; i++){
        std::cin>>aux;
        if(aux%2==0) n++;
    }

    std::cout<<n<<" valores pares"<<std::endl;
}
