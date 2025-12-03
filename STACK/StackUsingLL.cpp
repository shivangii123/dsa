#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next,*prev;

    node(int val){ //cobstructor
        this->data=val;
        this->next=nullptr;
        this->prev=nullptr;
    }

    node(int val,node* next, node* prev){
        this->data=val;
        this->next=next;
        this->prev=prev;
    }
};

class stack{
public:
    node* head;
    node* tail;
    int size;

    stack(){
        head= new node(0);
        tail=head;
        size=0;
    }

    void push(int val){
        node* z=new node(val);
        cout<<"tail ki value is : "<<tail->data <<endl ;

        tail->next=z;
        z->prev=tail;
        tail=tail->next;
        size++;
    }

    void pop(){
        node* nt=tail->prev;
        delete tail;
        nt->next=nullptr;
        tail=nt;
        size--;
    }

    int length(){
        return size;
    }

    bool empty(){
        return (size==0) ;
    }

    int top(){
        return (tail->data);
    }

};

int main(){

    stack st;  //call constructor automatically

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);


    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.length()<<endl;

    return 0;
}