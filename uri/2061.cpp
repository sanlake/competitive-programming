#include <iostream>

int32_t main(void){
    int N,M;
    std::string a;

    std::cin>>N>>M;

    for(int i=0; i<M; i++){
        std::cin>>a;
        if(a[0]=='f') N++;
        else N--;
    }
  
    std::cout<<N<<std::endl;
}
