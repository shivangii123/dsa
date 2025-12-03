#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // map<int ,int> m;

    // m{'a', 'b','c','d'}={0};

    // int n; cout<<"Enter size : ";
    // cin>>n;

    // int s; cout<<"Enter string : ";
    // cin>>s ;

    // int l=0, r=0;
    // for(int i=0;i<n;i++){
    //     if(s[])
    // }

    string s; int k;
    cin>>s>>k;

    vector<int>freq(26,0);

    int cnt=0, ans=0;
    int l=0, r=0;

    while(r<s.size()){
        while(r<s.size() && cnt<=k){
            if(freq[s[r]- 'a']==0){
                cnt++;
            }
            freq[s[r]-'a']++;
            r++;
        }
        ans=max(ans,r-1);

        while(l<=r && cnt>k){ //moing ahead , removing one unique char
            if(freq[s[l]-'a']==1){
                cnt-- ;
            }
            freq[s[l]-'a']--;
            l++;

        }
    }
        // ans=max(ans,r-1);
    cout<<ans<<endl ;
    return 0;
}
/* l-> 0 to n    , r-> 0 to n;  so T,C=(2N)
 EAH INDEX PAR L EK BAR YEGA , R BHI EK BAR AYHA SO T.C =0(2N)
*/