#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Queue {
    stack<int> st1, st2;
    int size =0 , bk = -1;

public :
    bool isEmpty(){
        return st1.empty();
    }

    void push(int val ){
        // if(isEmpty()){
        //     st1.push(val);
        //     cout<<"\nPushed "<<val <<" in queue ";
        //     size++ ;
        //     return ;
        // }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop() ;
        }
        st1.push(val);
        bk= val;
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        size++ ;
        cout<<"\nPushed "<<val <<" in queue ";
    }

    void pop(){
        if(st1.empty()){
            cout<<"\nQueue underflow !! ";
            return ;
        }
        cout<<"\nPoped "<<st1.top()<<" from queue ";
        st1.pop();
        size-- ;
    }

    int front(){
        if(st1.empty()){
            cout<<"\nQueue empty !!";
            return -1 ;
        }
        return st1.top() ;
    }

    int back(){
        if(st1.empty()){
            return -1;
        }
        return bk ;
    }

    int isSize(){
        return size ;
    }

};

int main(){

    Queue q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();
    q.pop();
    cout<<"\nFront  is :" <<q.front();
    cout<<"\nBack is :" <<q.back();
    q.push(5);
    cout<<"\nNow Front  is :" <<q.front();
    cout<<"\nNow Back is :" <<q.back();
    cout<<boolalpha <<"\nIs queue empty ?? " <<q.isEmpty();
    cout<<"\nsize is :" <<q.isSize();
    return 0;
}