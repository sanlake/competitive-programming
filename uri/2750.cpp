#include <iostream>

int32_t main(void){

    std::string dec[16] = {" 8", " 9", "10", "11", "12", "13", "14", "15"};
    std::string hex[16] = {" 8", " 9", " A", " B", " C", " D", " E", " F"};

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;

    std::cout<<"|  decimal  |  octal  |  Hexadecimal  |"<<std::endl;

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;

    for(int i=0; i<8; i++){
        std::cout<<"|      "<<i<<"    |    "<<i<<"    |       "<<i<<"       |"<<std::endl;
    }

    for(int i=0; i<8; i++){
        std::cout<<"|     "<<dec[i]<<"    |   "<<i+10<<"    |      "<<hex[i]<<"       |"<<std::endl;
    }

    for(int i=0; i<39; i++) std::cout<<"-";
    std::cout<<std::endl;
}
