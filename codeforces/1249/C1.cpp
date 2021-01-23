#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int32_t findPower(int x){
    int ans=std::log10(x)/std::log(3);
    return ans;
}

int32_t main(void){ DESYNC
    int n,a,f,valor,p,ab,fc;
    std::cin>>n;

    while(n--){
        std::vector<int> ps;
        std::cin>>a;ab=a;
        while(ab>0){
            fc=findPower(ab);
            if(std::find(ps.begin(),ps.end(),fc)==ps.end()){
                ps.push_back(fc);
                f+=pow(3,fc);
                ab-=pow(3,fc);
            } else break;
        }
        if(ab==0) std::cout<<a;
        else{
            for(int i=0; i<10; i++){
                if()
            }
        }
    }
}