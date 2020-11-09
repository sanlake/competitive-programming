#include <iostream>

int32_t main(void){
    int d1,d2,h1,h2,m1,m2,s1,s2;
    std::string trash;

    std::cin>>trash>>d1>>h1>>trash>>m1>>trash>>s1;
    std::cin>>trash>>d2>>h2>>trash>>m2>>trash>>s2;

    if(s2<s1){ s2+=60; m2--; }
    if(m2<m1){ m2+=60; h2--; }
    if(h2<h1){ h2+=24; d2--; }

    std::cout<<d2-d1<<" dia(s)"<<std::endl;
    std::cout<<h2-h1<<" hora(s)"<<std::endl;
    std::cout<<m2-m1<<" minuto(s)"<<std::endl;
    std::cout<<s2-s1<<" segundo(s)"<<std::endl;
}
