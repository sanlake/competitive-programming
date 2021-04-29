#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string line="",disc="";
    bool bb=true, ab=false;

    while(true){
	if (disc=="    <body>") bb=false; 

	if(bb | ab) std::getline(std::cin,disc);
	else {
	    std::getline(std::cin,line);
            if(line=="    </body>") ab=true;
	    if(!ab) std::cout<<line<<'\n';
	}
	
	if(std::cin.eof()) break;
    }
} 
