#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int t,n,aux;
    std::cin>>t;

    while(t--){
        std::cin>>n;
        int q[2]={0,0};
        bool p =false;

        std::vector<int> v;

        while(n--){ std::cin>>aux; q[aux-1]++; }

        for(int i=0; i<(q[1]/2); i++) v.push_back(2);
        for(int i=0; i<q[0]; i++) v.push_back(1);
        for(int i=0; i<q[1]-(q[1]/2); i++) v.push_back(2);

        for(int i=1; i<v.size(); i++){
            int sl=0,sr=0;
            for(int j=0; j<i; j++) sl+=v[j];
            for(int j=i; j<v.size(); j++) sr+=v[j];
            if(sl==sr){ p=true;break; }
        }

        std::cout<<(p?"YES":"NO")<<'\n';
    }
}