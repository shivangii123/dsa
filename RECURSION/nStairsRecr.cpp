#include<iostream>
#include<vector>
using namespace std ;

void solve(int n,int sum, int &cnt ){
    if(sum == n){ // base case
        cnt ++ ;
        return ;
    }
    if(sum > n){
        return ;
    }
    solve(n,sum +1,cnt);

    solve(n,sum +2,cnt) ;

}

int main(){
    int n ;cin>>n ;
    int cnt=0 ;
    solve(n, 0,cnt);
    cout<<cnt ;
    return 0;
}
