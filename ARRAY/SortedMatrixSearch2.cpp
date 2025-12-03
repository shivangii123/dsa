/* Sorted matrix search -TC ->O()
******SORTED BOTH ROW AND COL-WISE (Left->right:INCR, Top->Bottom:Incr )******
10, 20, 30     Target =80
20, 50, 60
50, 80, 90


20, 30, 45     Target=60
40, 46, 50  // so binary search will happen for each row
45, 48, 75   //since last elm of eah row greater than is Target
60, 75, 80
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ,m ,T;
    cout<<"Enter n, m , T : ";
    cin>>n>>m>>T ;

    vector<vector<int>> arr(n,vector<int> (m)) ;
    cout<<"Enter arr elements :  ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int i=0, j=m-1, r, c;
    bool ans=false;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j] ==T){
            ans=true;
            r=i; c=j;
            break;
        }
        else if(arr[i][j]<T){
            i++;
        }
        else{ //move towards Left
            j--;
        }
    }

    if(ans) {
        cout<<"True "<<endl;
        cout<<"Position is : "<<r<<" ,"<<c<<endl ;
    }
    else {
        cout<<"False " ;
    }
    return 0;
}