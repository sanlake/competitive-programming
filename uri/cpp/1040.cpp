#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double n1,n2,n3,n4,n5,m1,m2;
    std::cin>>n1>>n2>>n3>>n4;
    m1=(n1*2+n2*3+n3*4+n4)/10.0;

    std::cout.precision(1);
    std::cout<<std::fixed;
    std::cout<<"Media: "<<m1<<std::endl;

    std::cout<<"Aluno ";
    if(m1>=7.0) std::cout<<"aprovado."<<std::endl;
    else if(m1<5.0) std::cout<<"reprovado."<<std::endl;
    else {
        std::cout<<"em exame."<<std::endl;
        std::cin>>n5;
        std::cout<<"Nota do exame: "<<n5<<std::endl;
        m2=(n5+m1)/2.0;
        if(m2>=5.0) std::cout<<"Aluno aprovado."<<std::endl;
        else std::cout<<"Aluno reprovado."<<std::endl;
        std::cout<<"Media final: "<<m2<<std::endl;
    }


}
