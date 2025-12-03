#include<iostream>
using namespace std;

float add(float a,float b){
    int ans=a*a+ b*b;
    return ans;
}
float add(int a,int b){
    int ans=a*a+ b*b;
    return ans;
}
float add(int a,float b){
    int ans=a*a+ b*b;
    return ans;
}
float add(float a,int b){
    int ans=a*a+ b*b;
    return ans;
}
// string greetings(string name){
//     string sr1="Welcome  "+name+"";
//     return sr1;
// }

int main(){
    float a,b;

    cout<<"Enter a and b : ";
    cin>>a >>b ;
    
    float sum=add(a,b);
    cout<<"Ans is :" <<sum ;

    // string name;
    // cout<<"Enter your name :";
    // cin>>name;
    // cout<<greetings(name);

    return 0;
}