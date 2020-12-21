#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
#include <iostream>
#include <string>
 
int32_t main(void){
    DESYNC;
    int t,n,m,r;
    bool a;

    std::string p;
    std::size_t w,y;
 
    std::cin>>t;
 
    for(int i=0; i<t; i++){
        a=false;
        std::cin>>n>>p;

        w=p.find("2020");
        y=p.rfind("2020");
        if((w!=std::string::npos && (w==0 || w==n-4)) || (y!=std::string::npos && (y==0 || y==n-4))) a=true;
        else if(p.find("20")==0 && p.rfind("20")==n-2) a=true;
        else if(p.find("2")==0 && p.rfind("020")==n-3) a=true;
        else if(p.find("202")==0 && p.rfind("0")==n-1) a=true;
    
        std::cout<<((a)?"YES":"NO")<<std::endl;
    }
 
}