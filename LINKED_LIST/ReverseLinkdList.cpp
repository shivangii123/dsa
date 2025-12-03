//Reverse a linked list 
#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next ;

    Node(int val){
        data = val ;
        next= NULL ;
    }
};

Node* reverseLList(Node* head){
    Node* prev= NULL ;
    Node* curr= head;
    Node* temp;

    while(curr!= NULL){
        temp = curr-> next;
        curr-> next= prev;
        prev=curr;
        curr= temp;
    }
    return prev ;
}
    void printList(Node* head ){
        Node* curr = head ;
        while(curr != NULL ){
            cout<<curr->data <<" -> " ;
            curr= curr->next ;
        }
        cout<<"NULL" ;
    }
    

int main(){

    Node * head = new Node(10);
    Node * temp=head ;

    int arr[4]= {20,30,40,50};
    for(int el: arr){
        temp->next= new Node(el);
        temp = temp->next ;
    }
    cout<<"\nOriginal List is : ";
    printList(head);
    head = reverseLList(head); // Head Updated(Reversed)
    cout<<"\nNow Reversed List :";
    printList(head);

    return 0;
}