#include <iostream>

int32_t main(void){
    int n,c=0;

    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cout<<++c<<" "<<++c<<" "<<++c<<" PUM"<<std::endl;
        c++;
    }
}
