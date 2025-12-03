#include<iostream>
#include<queue>
using namespace std;

string solve(string A) {
    string B;
    queue<char> q;
    int freq[26]={0};
    
    for(int i=0;i<A.size(); i++){
        freq[A[i]-'a']++ ;
        // if unique -> push in queue
        if(freq[A[i]-'a'] == 1){
            q.push(A[i]) ;
        }
        // if queue non empty-> print 'q.front' else print '#
        if(!q.empty() && freq[q.front()-'a'] == 1){
            B.push_back(q.front());
        }
        else{
            while(!q.empty() &&  freq[q.front()-'a'] > 1){
                q.pop();
            }
            if(q.empty()){
                B +="#";
            }
            else{ 
                B += q.front();
            }
        }
        
    }
    return B ;
}

int main(){
    string s;cout<<"Enter string : "; cin>> s ;
    string ans;
    ans =solve (s);
    cout<<"Answer is : "<< ans ;
    return 0;
}