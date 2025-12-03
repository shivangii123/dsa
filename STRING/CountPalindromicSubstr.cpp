// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter string : ";
//     cin>>s;

//     int cnt=0;
//     for(int i=0;i<s.size();i++){
//         int l=i,r=i;
//         while(l>=0 && r<s.size() && s[l]==s[r] ){ // Odd LENGTH Palindrome string
//             cnt++;                               //for single centric
//             r++;
//             l--;
//         }
//     }

//     /*** EVEN LENGTH Palindromic string*/
//     for(int i=0;i<s.size()-1;i++){  //for double centric , Even length , eg:"bccbb"
//         int l=i, r=i+1;
//         while(l>=0 && r<s.size() && s[l]==s[r]){
//             cnt++;
//             l--;
//             r++;
//         }
//     }

//     cout<< "No . of Palindromic Su-string are : "<<cnt;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;

    int cnt=0;
    for(int i=0;i<s.size();i++){
        int l=i,r=i;
        while(l>=0 && r<s.size() && s[l]==s[r] ){ // Odd LENGTH Palindrome string
            cnt++;                               //for single centric
            r++;
            l--;
        }

//for double centric , Even length , eg:"bccbb"
        l=i, r=i+1;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
    }
    cout<< "No . of Palindromic Su-string are : "<<cnt;
    return 0;
}