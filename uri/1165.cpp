#include <iostream>

int main() {
  int n,x;
  bool flag;

  std::cin>>n;
  for(int i=0; i<n; i++){
    flag=false;
    std::cin>>x;

    for(int j=2; j<x; j++)
      if(x%j==0) { flag=true; break; }
      
    if(flag) std::cout<<x<<" nao eh primo"<<std::endl;
    else std::cout<<x<<" eh primo"<<std::endl;
  }
}
