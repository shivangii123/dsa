// #include<bits/stdc++.h>
// using namespace std;

// // int strCompr(char* s1,char* s2,int n,int m){

// //     for(int i=0;i<n;i++){
// //         if(s1[i]==s2[i]){
// //             i++;
// //         }
// //         else if(s1[i]>s2[i]){
// //             return 1;
// //         }
// //         else
// //             return -1;
// //     }
// //     if (strlen(s1)==strlen(s2)){
// //         return 0;
// //     }
// //     else if (strlen(s1)>strlen(s2)){
// //         return 1;
// //     }
// //     else
// //         return -1;
// // }


// //// or use WHILE LOOP ->O(N)/////
// int strrCompr(char* s1,char* s2){
//     int i=0;
//     while(s1[i]!='\0' && s2[i]!='\0'){ //&&-> both strings non-NULL
//         if(s1[i]==s2[i]){
//             i++ ;
//         }
//         else if(s1[i]>s2[i]){
//             return 1;
//         }
//         else
//             return -1;
//     }
//     if(s1[i]=='\0' && s2[i]=='\0'){ //both end together->so both same
//         return 0;
//     }
//     else if(s1[i]=='\0'){ //s1 is smaller
//         return -1;
//     }
//     else{
//         return 1;}
// }

// int main(){

//     int n,m;cout<<"Enter size of str1 and str2 :" ;
//     cin>>n>>m;

//     char* str1=new char; cout<<"Enter s1 :" ; cin>>str1;
//     char* str2= new char; cout<<"Enter s2 :" ;cin>>str2;


//     // cout<<strCompr(str1,str2,n,m);
//     cout<<strrCompr(str1,str2);

//     return 0;
// }

#include<iostream>
#include<cstring>
using namespace std;

void comp(char* s1,char* s2){

    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]>s2[i]){
            cout<<"s1 is greater ";
            return ;
        }
        else if(s2[i]>s1[i]){
            cout<<"s2 is greater ";
            return ;
        }
        else{
            i++ ;
        }
    }
    if(s1[i]=='\0' && s2[i]=='\0') {
        cout<< "Both are same ";
    }
    else if(s1[i]=='\0') {
        cout<< "s2 is greater";
    }
    else {
        cout<< "s1 is greater ";

    }
}

int main(){

    int n ;cout<<"Enter size : ";
    cin>>n;

    char s1[n]; cout<<"Enter string 1 : " ;
    cin>>s1;
    s1[n]='\0' ;

    char s2[n]; cout<<"Enter string 2 : " ;
    cin>>s2;
    s2[n]='\0' ;

    comp(s1,s2);


    return 0;
}

