#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n , m;cout<<"Enter : " ;cin>>n>>m;

    // vector<vector<int>> nums(n, vector<int>(m)) ;

    vector<vector<int>> dp(n+1, vector<int>(m+1)) ,  nums(n,vector<int>(m+1)) ;

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++)
        cin>>nums[i][j];
        }
    }

    // DP VECTOR
    // vector<vector<int>> dp(n+1, vector<int>(m+1) , nums(n,vector<int>(m+1))) ;

    for(int i=1;i<=n;i++){// one based indexing
        for(int j=1;j<=m;j++){
            if(i-1<0 && j-1<0){// left and top both don't exits
                dp[i][j]=nums[i][j]; // so 1st cell ki baat ho rhi h , add 
            }
            else if(j-1>0  && i-1<0){
                dp[i][j]= (dp[i][j-1] +nums[i][j] );
            }
            else if(i-1>0  && j-1<0){
                dp[i][j]= (dp[i-1][j] +nums[i][j] );
            }
            else if(i-1>0  && j-1>0){
                dp[i][j]= (dp[i-1][j] +nums[i][j] );
            }

        }
    }
    //tabulization




    return 0;
}