#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int value){
        data = value;
        next= NULL ;
    }
};

class Stack{
    Node * top;
    int size ;

    public :
        Stack (){
            size =0;
            top =NULL ;
        }
        void push(int value){
            Node* temp= new Node(value);
            // heap mry full if too many no in heap
            if(temp == NULL){
                cout<<"\nStack Overflow !!" ;
            }
            temp->next= top;
            top =temp ;
            size++  ;
            cout<<"\nPushed "<<value <<" in stack";
        }

        void pop(){
            if(top ==NULL){
                cout<<"\n Stack underflow !!";
                return ;
            }
            Node* temp= top;
            cout<<"\nPopped "<<top-> data <<" from stack" ;
            top= top-> next;
            size--;
            delete temp ;
        }

        int peek(){
            if(top == NULL){
                cout<<"\nOops !! Stack is empty !!";
                return -1 ;
            }
            return top->data ;
        }

        int IsSize(){
            return size ;
        }
        bool IsEmpty(){
            return top == NULL;
        }

};

int main(){
    Stack S ;

    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.pop();
    S.push(6);
    cout<<"\nElement at top is : "<< S.peek();
    cout<< "\nStack size is :" << S.IsSize();
    S.pop();
    cout<<boolalpha<<"\nIs Stack Empty ?? --> "<<S.IsEmpty();
    cout<< "\nStack size is :" << S.IsSize();

    return 0;
}