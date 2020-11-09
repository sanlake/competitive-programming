#include <iostream>

int32_t main(void){
    int n=0,p=0,e=0,aux;

    for(int i=0; i<5; i++){
        std::cin>>aux;
        if(aux>0) p++;
        else if(aux<0) n++;
        if(aux%2==0) e++;
    }

    std::cout<<e<<" valor(es) par(es)"<<std::endl;
    std::cout<<5-e<<" valor(es) impar(es)"<<std::endl;
    std::cout<<p<<" valor(es) positivo(s)"<<std::endl;
    std::cout<<n<<" valor(es) negativo(s)"<<std::endl;
}
