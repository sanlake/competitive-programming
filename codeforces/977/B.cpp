#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

typedef std::pair<std::string,int> psi;

struct cmp{
    constexpr bool operator()(
		    psi const& a,
		    psi const& b)
	    const noexcept
	    {
	        return a.second < b.second;
	    }
};

int32_t main(void){ DESYNC
    int n;
    std::string fw,sw;
    std::map<std::string,int> m;
    std::priority_queue<psi,std::vector<psi>,cmp> pq;

    std::cin>>n>>fw;

    for(int i=0; i<n-1; i++){
	sw=fw.substr(i,2);
	if(m.count(sw)!=0) m.at(sw)++;
	else m.insert(psi(sw,1));
    }

    for(auto x : m) pq.push(x);

    std::cout<<pq.top().first<<std::endl;
}
