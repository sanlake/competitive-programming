#include <iostream>

int32_t main(void){
	int n,m,s,aux;
	while(std::cin>>n>>m && n>0 && m>0){
		s=0;
		if(n>m){aux=m;m=n;n=aux;}
		for(int i=n; i<=m; i++){
			std::cout<<i<<" ";
			s+=i;
		}
		std::cout<<"Sum="<<s<<std::endl;
	}
}
