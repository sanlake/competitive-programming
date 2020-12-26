#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <algorithm>
#include <vector>

int32_t main(void){ DESYNC
    int n,a;
    std::cin>>n;

    std::vector<int> v(100);

    for(int i=0; i<n; i++){
        std::cin>>a;
        v[a-1]++;
    }

    std::sort(v.begin(),v.end(),std::greater<int>());

    std::cout<<v.front()<<'\n';
}