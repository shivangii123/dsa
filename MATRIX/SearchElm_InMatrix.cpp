#include<iostream>
using namespace std;

int MatrixSearch(int** arr,int T,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==T){
                return i;
            }
        }
    }
    return 0;
}

int main(){

    int m,n,T;
    int arr[m][n];
    cout<<"Enter m and n : ";
    cin>>m>>n;
    cout<<"Enter elemnet to search : " ;
    cin>>T ;

    // int** arr =new int*[m] ;
    int **arr= new int*[m] ;
    // Step 2: For each row, allocate memory for an array of integers
    for (int i = 0; i < m; i++) {
        arr[i]= new int[n] ;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
/********   PRACTISE ************/
    // cout<<arr<<" "<<*arr<<" "<<**arr<<endl;
    // //array name i.e 'arr' is -> pointer
    // cout<<arr[0] <<endl;

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i][j]==T){
//             return i;
//         }
//     }
// }

int ans= MatrixSearch(arr,T,m,n);
if(ans==0){
    cout<<"elememt not found !!";
}
else cout<<"element found at index : "<<ans ;
// cout<<"Elemnt is at index: "<<MatrixSearch(**arr,T,m,n);

}
