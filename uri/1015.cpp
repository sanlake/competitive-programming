#include <iostream>
#include <cmath>

int32_t main(void){
    double x1,x2,y1,y2;
    std::cin>>x1>>y1>>x2>>y2;

    std::cout.precision(4);
    std::cout<<std::fixed<<sqrt(pow((x2-x1),2.0)+pow((y2-y1),2.0))<<std::endl;
}
