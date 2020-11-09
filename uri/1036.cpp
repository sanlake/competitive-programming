#include <iostream>
#include <cmath>

int main(){
    double A,B,C,delta,r1,r2;
    
    std::cin>>A>>B>>C;

    if(A==0){std::cout<<"Impossivel calcular"<<std::endl;return 0;}

    delta = (B*B)-(4*A*C);

    if(delta<0){std::cout<<"Impossivel calcular"<<std::endl;return 0;}

    r1 = (-B+sqrt(delta))/(2*A);
    r2 = (-B-sqrt(delta))/(2*A);

    std::cout.precision(5);
    std::cout<<std::fixed;

    std::cout<<"R1 = "<<r1<<std::endl;
    std::cout<<"R2 = "<<r2<<std::endl;
}
