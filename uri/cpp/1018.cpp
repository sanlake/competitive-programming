#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,nb;
    int c[7]={0},v[7]={100,50,20,10,5,2,1};
    
    std::cin>>n;
    nb=n;

    for(int i=0; i<7; i++)
        if(nb>=v[i]){
            c[i]+=nb/v[i];
            nb=nb%v[i];
        }

    std::cout<<n<<std::endl;

    for(int i=0; i<7; i++) std::cout<<c[i]<<" nota(s) de R$ "<<v[i]<<",00"<<std::endl;
}
