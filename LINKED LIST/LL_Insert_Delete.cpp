#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node *next ;

    Node(int val){
        data = val;
        next= nullptr ;
    }
};

class List{
    public :
    Node * head ,*tail ;

    List(){
        head= tail= NULL ;
    }
    void insertAtFront(int val ){
        
        Node* newNode = new Node(val) ;
        if(head == NULL){
            head=tail= newNode ;
        }
        else{
            newNode -> next = head;
            head= newNode ;
        }
    }

    void print(){
        Node * h  = head ;
        if(h== NULL){
            cout<<"Linked List is empty !! " ;
        }
        else{
            Node* curr= h ;
            while(curr != NULL){
                cout<<curr->data <<"--> ";
                curr= curr->next ;
            }
            cout<<"NULL " ;
        }
    }

};


int main(){
    List ll;
    ll.insertAtFront(1);
    ll.insertAtFront(2);
    ll.insertAtFront(3);
    ll.insertAtFront(4);
    ll.insertAtFront(5);
    ll.insertAtFront(6);
    ll.insertAtFront(7);

    cout<<endl ;
    ll.print() ;
 
    // Node* head = NULL, *tail= NULL ;



    return 0;
}