#include <iostream>
#include <string>

int32_t main(void){
    int t,x;
    bool o;
    std::string str1,str2;
    std::cin>>t;

    while(t--){
        o=false;
        std::cin>>x;
        if(x<10) std::cout<<x<<std::endl;
        else{
            for(int i=1; i<(x/2)+1; i++){
                str1=std::to_string(i);
                str2=std::to_string(x-i);
                for(int j=0; j<str1.size(); j++){
                    std::cout<<str1[0]<<" "<<str1<<std::endl;
                    if(str2.find(str1[j])==std::string::npos) o=true;
                    if(o) break;
                }
                if(o && s!=x) o=false;
            }

            if(o) std::cout<<str1+str2<<std::endl;
            else std::cout<<"-1"<<std::endl;
        }
    }
    


}