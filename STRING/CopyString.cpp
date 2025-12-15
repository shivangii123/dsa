
#include<bits/stdc++.h>
using namespace std;

char* strcopy(char* s1,char* s2){
    int i=0;
    while(s2[i]!='\0'){
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    return s1;
}

int main(){
    int n,m;
    cout<<"enter size of s1 : "; cin>>n;
    char s1[n+1];

    cout<<"Enter s1 : " ; cin>>s1;

    cout<<"enter size of s2 : "; cin>>m;
    char s2[m+1];
    cout<<"Enter s2 : " ; cin>>s2;

    cout<<"now s1 is : "<<strcopy(s1,s2);
    return 0;
}