#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>

int32_t main(void){ DESYNC
    int n;
    std::vector<std::string> m = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    std::cin>>n;
    std::cout<<m[n-1]<<std::endl;
}
