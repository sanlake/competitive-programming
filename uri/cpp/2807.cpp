#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <stack>

int32_t main(void){ DESYNC
    int a,b=0,c=1;
    std::cin>>a;

    std::stack<int> v;

    for(int i=0; i<a-1; i++){ 
        v.push(b+c); 
        c+=b;
        b=c-b;
    }

    while(!v.empty()){ std::cout<<v.top()<<" "; v.pop(); }
    std::cout<<1;
    std::cout<<std::endl;
}