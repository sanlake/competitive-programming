#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <vector>
 
int32_t main(void){
    DESYNC;
    int n,m,t;
    long long int a,b,q;
    std::cin>>n>>m;
    std::vector<long long int> va(n);

    for(int i=0; i<n; i++) std::cin>>va[i];
    for(int i=0; i<n; i++) (i==0)?va[i]=va[i]:va[i]+=va[i-1];
    while(m--){
        std::cin>>b;
        int pos=lower_bound(va.begin(),va.end(),b)-va.begin();
        std::cout<<pos+1<<" "<<(pos==0?b:b-va[pos-1])<<std::endl;
    }
}