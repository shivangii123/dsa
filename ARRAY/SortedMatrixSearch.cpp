/* Sorted matrix search - TC-> O(nlogm)
******SORTED ROW-WISE (Left side smaller, right->larger )*******
40, 50, 60     Target =80
10, 20, 30
70, 80, 90


20, 30, 75     Target=45
40, 48, 65   // so binary search will happen for each row
45, 50, 55   //since last elm of eah row gretaer than is Target
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ,m ,T;
    cout<<"Enter n, m , T : ";
    cin>>n>>m>>T ;

    vector<vector<int>> arr(n ,vector<int>(m));
    cout<<"Enter Array elemnts : " ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    bool ans=false ;
    for(int i=0;i<n && ans==false;i++){
        if(arr[i][m-1] == T){
            ans=true;
            break ;
        }
        else if(arr[i][m-1] <T){
            i++ ;
        }
        else{    // Binary Search
            int l=0, r=m-1 ,j, mid;
            while(l<=r){
                mid=(l+r)/2 ;
                if(arr[i][mid]==T){
                    ans=true ;
                    break;
                }
                else if(arr[i][mid]<T){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
    }

    if(ans)
        cout<<"True" ;
    else
        cout<<"False" ;
    
    return 0;
}