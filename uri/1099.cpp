#include <iostream>

int32_t main(void){
	int n,x,y,soma=0,aux;
	std::cin>>n;

	for(int i=0; i<n; i++){
		std::cin>>x>>y;
		if(x>y){
			aux=x;
			x=y;
			y=aux;
		}
		for(int j=x+1; j<y; j++)
			if(j%2!=0) soma+=j;
		std::cout<<soma<<std::endl;
		soma=0;
	}
}
