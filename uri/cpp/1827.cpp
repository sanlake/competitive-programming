#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n;

    while(std::cin>>n){
    	int arr[n][n];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) arr[i][j]=0;
	
	for(int i=0; i<n; i++){
	    arr[i][i]=2;
	    arr[i][n-1-i]=3;
	}
	
	for(int i=n/3;i<n-(n/3);i++) for(int j=n/3;j<n-(n/3);j++) arr[i][j]=1;
	
	arr[n/2][n/2]=4;

	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++) std::cout<<arr[i][j];
	    std::cout<<'\n';
	}
	
	std::cout<<'\n';
    }
} 
