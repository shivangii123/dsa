#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size ;
    int top;
    public :

    Stack(int s){  // Constructor to initialize Size
        size = s ;
        top = -1 ;
        arr = new int[size];
    }

    void push(int value ){
        if(top == size -1){
            cout<<"\nStack overflow !!" ;
            return ;
        }
        arr[++top ]= value;
        cout<<"\nPushed "<<value<<" into the stack ";
    }

    void pop(){
        if(top == -1){
            cout<<"\nStack underflow !! " ;
            return ;
        }
        top --;
        cout<<"\nPopped "<<arr[top +1]<<" from the stack ";
    }

    int peek(){
        if(top == -1){
            cout<<"\nOops !!!Stack is Empty ";
            return -1 ;
        }
        return arr[top];
    }
    
    int IsSize(){
        return top +1 ;
    }

    bool isEmpty(){
        return (top ==-1) ;
    }

};

int main(){

    Stack S( 5);

    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.pop();
    cout<<"\nElement at top is : "<<S.peek();
    cout<<boolalpha<<"\nStack is empty or not ?-> " <<bool(S.isEmpty());
    cout<<"\nStack size : "<< S.IsSize();
    S.pop();


    return 0;
}