#include <iostream>

int32_t main(void){
    int a;
    char c=' ';
    std::cin>>a;

    if(a<1) c='E';
    else if(a>0 && a<36) c='D';
    else if(a>35 && a<61) c='C';
    else if(a>60 && a<86) c='B';
    else if(a>85) c='A';
    
    std::cout<<c<<std::endl;
}
