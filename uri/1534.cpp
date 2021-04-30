#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n;

    while(std::cin>>n){
    	int arr[n][n];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) arr[i][j]=3;
	
	for(int i=0; i<n; i++){
	    arr[i][i]=1;
	    arr[i][n-1-i]=2;
	}
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++) std::cout<<arr[i][j]<<" ";
	    std::cout<<'\n';
	}
    }
} 
