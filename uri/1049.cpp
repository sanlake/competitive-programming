#include <iostream>
#include <vector>

int32_t main(void){
    int p=0;
    bool ma=false;
    std::vector<std::string> v = {"aguia", "pomba", "homem", "vaca", "pulga", "lagarta", "sanguessuga", "minhoca"};
    std::string str;
    
    for(int i=0; i<3; i++){
        std::cin>>str;
        if(str=="invertebrado") p+=4;
        else if(str=="anelideo" || str=="mamifero") p+=2;
        else if(str=="onivoro" || str=="herbivoro") p++;

        if(str=="mamifero") ma=true;
        if(ma && str=="onivoro") p--;
    }

    std::cout<<v[p]<<std::endl;
}
