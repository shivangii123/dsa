// #include<iostream>
// using namespace std;

// int main(){

//     int a,b,c;
//     cout<<"Enter 1 no. : ";
//     cin>>a;
//     cout<<"Enter 2 no. : ";
//     cin>>b;
//     cout<<"Enter 3 no. : ";
//     cin>>c;

//     if (a>b){
//         if(a>c){
//             cout<<a <<"is largest" ;
//         }
//         else{
//             cout<<c<<" is largest " ;
//         }
//     }
//     else if(b>c){
//         cout<<b <<" is largest";
//     }
//     else{
//         cout<<c <<" is largest" ;
//     }
//     return 0;
// }

// int main(){

//     int a,b,c;
//     cout<<"Enter 1 no. : ";
//     cin>>a;
//     cout<<"Enter 2 no. : ";
//     cin>>b;
//     cout<<"Enter 3 no. : ";
//     cin>>c;

//     if (a>b && a>c)
//             cout<<a <<"is largest" ;
        
//         else if(b>c)
//             cout<<b<<" is largest " ;
        
//         else
//         cout<< c<<" is largest ";
        
//     return 0;
// }

// int main(){

//     int n;
//     cout<<"Enter value of n :" ;
//     cin>>n;
//     for(int i=2;i<=n;i+=2 ){
//         cout<< i <<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;

//     // int i=n;
//     // while(i%5!=0){

//     //     cout<<i<<endl;
//     //     i+=1;
//     // }

//     // for(int i=n;i<=n+4;i+=1){
//     //     if(i%5==0){
//     //         break;
//     //     }
//     //     cout<<i<<endl;
//     // }
// }

#include<iostream>
using namespace std;
#define str string

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;

    for(int i=n;i<=n+10;i+=1){
        if(i%3==0){
            continue;;
        }
        cout<<i<<endl;
    }

    str b;
    cout<<endl <<"enter a string :" ;
    cin>>b;
    cout<<b;

}