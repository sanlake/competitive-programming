#include <iostream>

int32_t main(void){
	double A,B,C;
	std::cin>>A>>B>>C;

	std::cout.precision(1);
	std::cout<<std::fixed;
	if((A<(B+C) && A>(B-C) && A>(C-B)) || (B<(A+C) && B>(A-C) && B>(A-B)) || (C<(B+A) && C>(B-A) && C>(A-B)))
		std::cout<<"Perimetro = "<<A+B+C<<std::endl;
	else std::cout<<"Area = "<<((A+B)*C)/2.0<<std::endl;
}
