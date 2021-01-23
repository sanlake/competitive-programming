#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>


int32_t main(void){ DESYNC
    int n,a,t,valor,c;
    std::cin>>t;

    while(t--){
        std::cin>>n;
        std::vector<int> v(n);
        for(int i=0; i<n; i++) std::cin>>v[i];

        for(int i=0; i<n; i++){
            valor=v[i];c=1;
            while(valor!=i+1 && c++) valor=v[valor-1];
            std::cout<<c<<" ";
        }std::cout<<'\n';
    }
}