#include<iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node* next ;

    Node(int val){
        data =val;
        next= nullptr ;
    }

    static void print(Node* head){ //static, so used by Class name
        Node *ptr = head;
        while(ptr != NULL){
            cout<<ptr-> data <<"--> " ;
            ptr = ptr->next ;
        }
        cout<<"NULL " ;
    }
};

int main(){
    int n; cout<<"Enter no. of nodes : "; cin>>n ;
    if(n<=0){ cout<<"Enter n greater than 0 !! "; return 0;}

    Node * newNode = new Node(1);// first node
    Node *curr = newNode ;
    Node * head = curr ;

    for(int i=2;i<=n;i++){
        Node* newNode = new Node(i);
        curr-> next = newNode ;
        curr= curr-> next ; 
    }
    Node * tail = curr ;// last Node ka Address
    curr-> next = NULL ;

    Node :: print(head);

    Node * ptr = head , *temp ;
    while(ptr != nullptr){
        temp = ptr ;
        ptr= ptr->next ;
        delete temp ;
    }
    

    return 0;
}