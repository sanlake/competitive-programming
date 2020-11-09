#include <iostream>

int32_t main(void){
    int a;
    double b,c;
    std::cin>>a>>b>>c;
    std::cout.precision(2);
    std::cout<<"NUMBER = "<<a<<std::endl;
    std::cout<<std::fixed<<"SALARY = U$ "<<b*c<<std::endl;
}
