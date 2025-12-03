#include<iostream>
#include<vector>
using namespace std;

class stk{

    vector<int> v;

    public :

    void push(int val){
        v.push_back(val);
    }

    void pop(){
    v.pop_back();
    }

    int size(){
    return v.size();
    }

    int top(){
        return v[v.size()-1 ];
    }

    bool empty(){
        return v.empty();
    }


};

int main(){

    // vector<int> v;

    stk vt= new stk;

    vt.push(1);
    vt.push(2);

    return 0;
}