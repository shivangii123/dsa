#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL ;
    }
};

class Queue{
    Node* front ;
    Node* rear;
    int size ;

   public :
    Queue(){  // constructor
        front =NULL;
        rear= NULL ;
        size = 0;
    }

    void enqueue(int val){
        Node* temp = new Node(val); // calls Node constrc, assign val to data
        if(rear == NULL){ // when queue empty
            front= rear= temp;
            cout<< "inserted " <<val<<" in queue ";
            size ++ ;
        }
        else {
            rear->next= temp ;
            rear = temp ;
            cout<<"\nInserted " <<val<<" in queue ";
            size++ ;
        }
    }

    void dequeue(){
        if(front == NULL){
            cout<<"\nQueue underflow !!";
            return ;
        }
        else{ // remove elm from FRONT
            Node* temp = front;

            cout<<"\nDeleted "<<front-> data<<" from queue ";
            if(front == rear){// only one element
                front = rear=NULL ;
            }
            else{
                front= front->next ;
            }
            delete temp ;
            size-- ;
        }
    }

    int peek(){
        if(front== NULL){
            cout<<"\nQueue empty !!";
            return -1;
        }
        return front-> data ;
    }

    bool isEmpty(){
        return (front == NULL) ;
    }
    int isSize(){
        return size ;
    }
    
};

int main(){
    Queue Q ;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    cout<<"\nNow top element is : "<<Q.peek();
    Q.dequeue();
    Q.dequeue();
    cout<<"\nNow top element is : "<<Q.peek();
    Q.enqueue(5);
    Q.enqueue(6);
    cout<<boolalpha <<"\nIs queue empty ? "<<Q.isEmpty();
    cout<<"\nNo. of elements in queue is : " <<Q.isSize();
    
    return 0;
}