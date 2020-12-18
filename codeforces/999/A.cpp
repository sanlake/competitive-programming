#define DESYNC std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0)
#include <iostream>
#include <vector>

int32_t main(void){
    DESYNC;
    int n,k,fl=-1,fr=-1;

    std::cin>>n>>k;
    std::vector<int> v(n),vr(n);

    for(int i=0; i<n; i++) std::cin>>v[i];
    for(int i=0; i<n; i++) if(v[i]>k) {fl=i;break;}
    for(int i=n-1; i>=0; i--) if(v[i]>k) {fr=i;break;}

    std::cout<<((fl!=-1)?fl+(n-fr-1):n)<<'\n';
}