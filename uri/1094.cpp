#include <iostream>
#include <map>

int32_t main(void){
    int n,q,t=0;
    char c;

    std::map<char, int> v = {
        {'C',0},
        {'R',0},
        {'S',0}
    };

    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>q>>c;
        v.at(c)+=q;
        t+=q;
    }

    std::cout<<"Total: "<<t<<" cobaias"<<std::endl;
    std::cout<<"Total de coelhos: "<<v.at('C')<<std::endl;
    std::cout<<"Total de ratos: "<<v.at('R')<<std::endl;
    std::cout<<"Total de sapos: "<<v.at('S')<<std::endl;

    std::cout.precision(2);
    std::cout<<std::fixed;

    std::cout<<"Percentual de coelhos: "<<v.at('C')/(t*0.01)<<" %"<<std::endl;
    std::cout<<"Percentual de ratos: "<<v.at('R')/(t*0.01)<<" %"<<std::endl;
    std::cout<<"Percentual de sapos: "<<v.at('S')/(t*0.01)<<" %"<<std::endl;
    
}
