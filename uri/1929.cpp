#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a=0,b=0,c=0,d=0;
    bool triangulo = false;
    std::cin>>a>>b>>c>>d;

    int A=a,B=b,C=c,D=d;

    for(int i=0; i<4; i++){
        if( (A < (B+C) && A > (B-C) && A > (C-B)) || (B < (A+C) && B > (A-C) && B > (C-A)) || (C < (B+A) && C > (B-A) && C > (A-B)) ){
            triangulo = true;
            break;
        }
        switch(i){
            case 0:
                A=D;
                break;
            case 1:
                A=a;
                B=D;
                break;
            case 2:
                B=b;
                C=D;
                break;
        }
    }

    if(triangulo) std::cout<<"S"<<std::endl;
    else std::cout<<"N"<<std::endl;
}
