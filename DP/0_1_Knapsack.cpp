#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ,s; cout<<"Enter : "; cin>>n>>s;


    vector<int>p(n), w(n) ;

    for(int i=0; i<n ;i++){
        cin>>p[i];
    }

    for(int i=0; i<n ;i++){
        cin>>w[i];
    }

    vector<int> dp(s+1, -1) ;// s-> ma weight , knapsack ka eight
    dp[0]=0;

    for(int i=0;i<n;i++){// itertate ovver n objects, 
        for(int j=s;j>0;j--){// jth state par pahunche ke liye 
            if(w[i]<=j && dp[j-w[i]]!=1)// ith obj ko use karke j ke sare eihgts banayenge
            dp[j]=max(dp[j], dp[j-w[i]] +p[i]);
        }
    }

    int ans =0 ;
    for(int i=0;i<=s;i++){
        ans=max(ans,dp[i]);
    }

    cout<<ans<<endl ;
    return 0;
}