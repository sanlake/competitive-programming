#include <iostream>
#include <vector>

int32_t main(void){
    int n,k,a,s=0,e;
    std::vector<int> v;

    std::cin>>n>>k;
    for(int i=0; i<n; i++){
        std::cin>>a;
        v.push_back(a);
        if(i==k-1) e=a;
    }

    for(auto x : v){
        if(x<e||x<=0) break;
        s++;
    }

    std::cout<<s<<std::endl;
}