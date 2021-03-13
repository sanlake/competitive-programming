#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <map>

int32_t main(void){ DESYNC
    int n;
    std::string name,phone;
    
    std::cin>>n;
    std::map<std::string, std::string> dict;

    for(int i=0; i<n; i++){
    	std::cin>>name>>phone;
	dict.insert(std::make_pair(name,phone));
    }

    while(std::cin>>name)
        if(dict.find(name) != dict.end()) std::cout<<name<<"="<<dict.at(name)<<'\n';
        else std::cout<<"Not found"<<'\n';

}
