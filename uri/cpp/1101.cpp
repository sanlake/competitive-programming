#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,m,s,aux;
    while(std::cin>>n>>m && n>0 && m>0){
        s=0;
        if(n>m){aux=m;m=n;n=aux;}
        for(int i=n; i<=m; i++){
            std::cout<<i<<" ";
            s+=i;
        }
        std::cout<<"Sum="<<s<<std::endl;
    }
}
