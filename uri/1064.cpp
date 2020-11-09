#include <iostream>

int32_t main(void){
    int n=0;
    double so=0.0,aux;

    for(int i=0; i<6; i++){
        std::cin>>aux;
        if(aux>0) { n++; so+=aux; }
    }

    std::cout.precision(1);
    std::cout<<std::fixed;
    std::cout<<n<<" valores positivos"<<std::endl;
    std::cout<<so/n<<std::endl;
}
