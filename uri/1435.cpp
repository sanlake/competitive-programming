#include<iostream>

int32_t main(void){
    int n;
    std::string espaco;
    
    while(std::cin>>n && n!=0){
        int mat[n][n];

        for(int k=0; k<n; k++)
            for(int i=k; i<n-k; i++)
                for(int j=k; j<n-k; j++)
                    mat[i][j]=k+1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                espaco = " ";
                if(mat[i][j]<10) espaco+=" "; 
                if(j>0) espaco+=" ";
	        std::cout<<espaco<<mat[i][j];
            }std::cout<<std::endl;
        }std::cout<<std::endl;
    }
}
