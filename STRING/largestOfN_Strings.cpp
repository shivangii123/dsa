// #include<bits/stdc++.h>
// #include<algorithm>

// using namespace std;

// int main(){

//     int N; cout<<"Enter NO OF string : ";
//     cin>>N;

//     int m; cout<<"Enter size: ";
//     cin>>m;
//     char arr[m+1];
//     arr[m]='\0';
//     cin>>arr;


//     for(int i=0;i<N-1;i++){
//         int s; cout<<"enter :" ; cin>>s;
//         char str[m+1];
//         str[m]='\0';
//         cin>>str ;

//         if(strcmp(arr,str) <0){ //if arr= abc , str=ae ,the strcmp func will check a
//                strcpy(arr,str) ; //  a is same ,2nd char mein-> diff so "b - e" =-3 so ;
                                // negative,so greater pata chal jayega
//         }
//     }
//     cout<<"\nLargest string is : " << arr <<endl ;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter size : ";
    cin>>n ;
    cout<<"Enter string 1 : " ;
    string arr ; cin>>arr ;
    int index=0 ;

    for(int i=0;i<n-1;i++){
        cout<<"enter string : " ;
        string str;
        cin>>str ;

        if(arr < str){
            arr=str ;
            index=i;
        }
    }
    cout<<"Largest string is : "<<arr<<endl ;

    return 0;
}