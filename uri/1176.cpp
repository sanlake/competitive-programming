#include <iostream>
#include <vector>

int32_t main(void){
    int n,a;
    std::vector<long long int> v;

    v.push_back(0);
    v.push_back(1);

    for(int i=2; i<=60; i++)
    	v.push_back(v[i-1]+v[i-2]);

    std::cin>>n;
    for(int i=0; i<n; i++){
    	std::cin>>a;
	std::cout<<"Fib("<<a<<") = "<<v[a]<<std::endl;
    }

}
