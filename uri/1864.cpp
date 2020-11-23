#include <iostream>
#include <string>

int32_t main(void){
    int q;
    std::string p = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    std::cin>>q;
    std::cout<<p.substr(0,q)<<std::endl;
}
