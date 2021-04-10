#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <algorithm>
#include <vector>

int32_t main(void){ DESYNC
    int n,k,a;
    std::vector<int> v;

    std::cin>>n>>k;

    for(int i=0; i<n; i++){
        std::cin>>a;
	v.push_back(a);
    }

    sort(v.begin(),v.end());

    if(k==0&&v[0]>1) std::cout<<v[0]-1<<std::endl;
    else if(k>0&&(v.size()==k||v[k-1]!=v[k])) std::cout<<v[k-1]<<std::endl;
    else std::cout<<-1<<std::endl;
}
