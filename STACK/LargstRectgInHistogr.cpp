#include<iostream>
#include<vector>
#include<stack>
using namespace std;

    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size() ;
        arr.push_back(0) ;
        stack<int> st;
        int tp, width, ans=0 ;

        for(int i=0;i<arr.size(); i++){
            while(!st.empty() && arr[i] < arr[st.top()] ){
                tp= st.top() ;
                st.pop();
                if(!st.empty()){
                    width= i- st.top() - 1;
                    ans= max(ans, arr[tp] * width) ;
                }
                else{
                    ans= max(ans, arr[tp] * (i) );
                }

                width= (!st.empty())? i-st.top() -1 : i ;
            }

            st.push(i) ;
        }
        return ans ;
    }


int main(){

    int n ; cout<<"enter array size : "; cin>> n ;
    vector<int> v ;
    int el;

    for(int i=0;i<n ;i++){
        cin>> el;
        v.push_back(el) ;
    }
    
    cout<<"largest Rectangle Area In Histogram is : "<<largestRectangleArea(v) ;

    return 0;
}