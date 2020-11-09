#include <iostream>

int32_t main(void){
    int ni,nb,aux;
    int m[6]={0};
    int c[6]={0},vc[6]={100,50,20,10,5,2};

    double vm[6]={1.00,0.50,0.25,0.10,0.05,0.01};
    double n;
    
    std::cin>>n;
    nb=(int)n;
    
    for(int i=0; i<6; i++)
        if(nb>=vc[i]){
            c[i]+=nb/vc[i];
            nb=nb%vc[i];
        }
    
    ni=(int)((n-(int)n+nb)*100);

    for(int i=0; i<6; i++){
        aux=(int)(vm[i]*100);
        if(ni>=aux){
            m[i]+=ni/aux;
            ni=ni%aux;
        }
    }


    std::cout.precision(2);
    std::cout<<std::fixed;

    std::cout<<"NOTAS:"<<std::endl;
    for(int i=0; i<6; i++) std::cout<<c[i]<<" nota(s) de R$ "<<vc[i]<<".00"<<std::endl;
    std::cout<<"MOEDAS:"<<std::endl;
    for(int i=0; i<6; i++) std::cout<<m[i]<<" moeda(s) de R$ "<<vm[i]<<std::endl;
}
