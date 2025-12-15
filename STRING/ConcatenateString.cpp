//***********************USING CHAR ARRAYS ***********

// #include<iostream>
// using namespace std;

// char* strConc(char* s1, char* s2,int n){
//     int i=0,j=n;
//     while(s2[i]!=0){
//         s1[j]=s2[i];
//         i++;
//         j++;
//     }
//     s1[j]='\0';    return s1;
// }

// int main(){
//     int n; cout<<"Enter size n : ";
//     cin>>n;
//     int m; cout<<"Enter size s2 : ";
//     cin>>m;

//     char s1[n+1+m];
//     cout<<"Enter s1 : ";
//     cin>>s1 ; s1[n]='\0';

//     char s2[m+1];
//     cout<<"Enter s2 : ";
//     cin>>s2; s2[m]='\0';

//     cout<<"S1 afterconcatenation is : "<< strConc(s1,s2,n)<<endl;

//     return 0;
// }


//***********************USING STRINGS  ***********

#include<iostream>
#include<string>
using namespace std;

string conct(string s1,string s2){
    int n=s1.size();
    for(int i=0;i<s2.size();i++){
        s1[n+i] =s2[i];
    }

    return s1;
}

int main(){

    string s1;
    cout<<"Enter s1 : ";
    cin>>s1;

    string s2;
    cout<<"Enter s2 : ";
    cin>>s2;

    cout<< "s1 after concatenation is : " <<conct(s1,s2) ;

    return 0;
}