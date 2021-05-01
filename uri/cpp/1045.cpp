#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int32_t main(void){ DESYNC
    std::vector<double> l;
    double aux,fi,la;
    int q,bi=0;

    for(int i=0; i<3; i++){
        std::cin>>aux;
        l.push_back(aux);
    }

    std::sort(l.begin(),l.end());

    fi=pow(l[2],2);
    la=pow(l[1],2)+pow(l[0],2);

    if(l[2]>=l[1]+l[0]) std::cout<<"NAO FORMA TRIANGULO"<<std::endl;
    else{
        if(fi==la) std::cout<<"TRIANGULO RETANGULO"<<std::endl;    
        else if(fi>la) std::cout<<"TRIANGULO OBTUSANGULO"<<std::endl;    
        else std::cout<<"TRIANGULO ACUTANGULO"<<std::endl;
        for(int i=0; i<3; i++){
            q=std::count(l.begin(), l.end(), l[i]);
            if(q>bi) bi=q;
        }
        if(bi==3) std::cout<<"TRIANGULO EQUILATERO"<<std::endl;
        else if(bi==2) std::cout<<"TRIANGULO ISOSCELES"<<std::endl;
    }
}
