#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
  double n=0.00, n2=0.00;
  std::cin>>n>>n2;

  std::cout<<std::fixed;
  std::cout.precision(2);
  std::cout<<((n2-n)/n)*100.00<<"%"<<std::endl;
}
