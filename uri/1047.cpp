#include <iostream>

int32_t main(void){
	int hi,mi,hf,mf;
	std::cin>>hi>>mi>>hf>>mf;

	if(hf<hi) hf+=24;
	if(hf==hi && mf<=mi) hf+=24;
	if(mf<mi){ hf--;mf+=60; }

	std::cout<<"O JOGO DUROU "<<hf-hi<<" HORA(S) E ";
	std::cout<<mf-mi<<" MINUTO(S)"<<std::endl;
}
