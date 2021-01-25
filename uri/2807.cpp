#include <iostream>
#include <stack>

int32_t main(void){
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