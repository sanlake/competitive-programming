#include <iostream>

int32_t main(void){
    int lt=0,ht=0,l1=0,h1=0,l2=0,h2=0;
    bool s=false;
    std::cin>>lt>>ht>>l1>>h1>>l2>>h2;

    if(lt>=l1 && lt>=l2 && ht>=h1+h2) s=true;
    if(lt>=h1 && lt>=h2 && ht>=l1+l2) s=true;
    if(lt>=h1 && lt>=l2 && ht>=l1+h2) s=true;
    if(lt>=l1 && lt>=h2 && ht>=h1+l2) s=true;
    if(ht>=l1 && ht>=l2 && lt>=h1+h2) s=true;
    if(ht>=h1 && ht>=h2 && lt>=l1+l2) s=true;
    if(ht>=h1 && ht>=l2 && lt>=l1+h2) s=true;
    if(ht>=l1 && ht>=h2 && lt>=h1+l2) s=true;

    if(s) std::cout<<"S"<<std::endl;
    else std::cout<<"N"<<std::endl;
}
