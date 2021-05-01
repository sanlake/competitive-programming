#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include<iostream>

int32_t main(void){ DESYNC
    int a1,a2,b1,b2,c1,c2,s=0;
    std::cin>>a1>>b1>>c1>>a2>>b2>>c2;

    if(a2-a1>0) s+=a2-a1;
    if(b2-b1>0) s+=b2-b1;
    if(c2-c1>0) s+=c2-c1;

    std::cout<<s<<std::endl;
}
