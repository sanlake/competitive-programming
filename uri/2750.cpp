#include <iostream>

int main(){

  string bas[8] = {" 0", " 1", " 2", " 3", " 4", " 5", " 6", " 7"};
  string dec[16] = {" 8", " 9", "10", "11", "12", "13", "14", "15"};
  string oct[16] = {"10", "11", "12", "13", "14", "15", "16", "17"};
  string hex[16] = {" 8", " 9", " A", " B", " C", " D", " E", " F"};

  for(int i=0; i<39; i++) cout<<"-";
  cout<<endl;

  std::cout<<"|  decimal  |  octal  |  Hexadecimal  |"<<std::endl;

    for(int i=0; i<39; i++) std::cout<<"-";
        std::cout<<std::endl;

    for(int i=0; i<8; i++){
        std::cout<<"|      "<<i<<"    |    "<<i<<"    |       "<<i<<"       |"<<std::endl;
  }

  for(int i=0; i<8; i++){
    cout<<"|     "<<dec[i]<<"    |   "<<oct[i]<<"    |      "<<hex[i]<<"       |"<<endl;
  }

  for(int i=0; i<39; i++) cout<<"-";
  cout<<endl;
  return 0;
}
