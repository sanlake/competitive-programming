#include <iostream>

int32_t main(void){
    int q=0;
    double n,m=0.0;

    while(true){
        std::cin>>n;
        if(n>=0 && n<=10){ m+=n; q++; }
        else std::cout<<"nota invalida"<<std::endl;

        if(q==2) break;
    }

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<"media = "<<m/2.0<<std::endl;
}
