#include <iostream>
#include <queue>
#include <stack>

int32_t main(void){
    int t,n,n1,b;
    std::queue<int> q;
    std::stack<int> s;

    std::cin>>t;

    for(int i=0; i<t; i++){
        std::cin>>n;
        n1=n/2;
        for(int j=0; j<n/2; j++){
            std::cin>>b;
            q.push(b);
        }
        for(int j=0; j<n-n1; j++){
            std::cin>>b;
            s.push(b);
        }
        for(int j=0; j<n/2; j++){
            if(!q.empty()){
                std::cout<<q.front()<<" ";
                q.pop();
            }
            if(!s.empty()){
                std::cout<<s.top()<<" ";
                s.pop();
            }
        }

        if(!s.empty()){
            std::cout<<s.top();
            s.pop();
        }
        std::cout<<std::endl;
    }
}