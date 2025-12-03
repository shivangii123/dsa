#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

};
class List{
    public:
    Node* head, *tail ;//data members
    int size =0;

    List(){ //constructor
        head = tail= NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        // newNode->data =val;

        if(head== NULL){
            head= tail= newNode;
        }
        else{
            newNode->next = head;
            head= newNode;
        }
        cout<<"Inserted value is :"<<val<<endl;
        size++ ;
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head== NULL){
            head = newNode ;
        }
        else{
            Node* curr= head;
            while(curr->next !=NULL){
                curr= curr->next;
            }
            curr->next = newNode;
            newNode->next= NULL;
        }
        cout<<"Inserted value is :" <<val<<endl ;
        size++ ;
    }

    void insertAfter(int val,int key){
        Node* newNode =new Node(val);
        if(head== NULL){
            cout<<"LIST IS EMPTY !!"<<endl;
        }
        else{
            Node *curr= head;
            while(curr !=NULL && curr->data != key){
                curr= curr->next;
            }
            if (curr== NULL ){
                cout<<"KEY NOT FOUND !!"<<endl;
            }
            else{
                newNode->next = curr->next;
                curr->next= newNode;
                cout<<"Inserted "<<val<<" after "<<key<<endl;
                size++ ;
            }
        }
    }

    void pop_front(){
        if(head== NULL){
            cout<<"List is Empty !!"<<endl ;
        }
        else{
            Node* temp= head;
            cout<<"Popped value is :" << temp-> data<<endl;
            head= head->next;
            delete temp;
            size --;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LIST IS EMPTY !!"<<endl ;
        }
        else if(head->next == NULL){ // ONLY ONE NODE
            cout<<"Popped elm is : " <<head->data<<endl;
            delete head;
            head = tail= NULL;
            size --;
        }
        else{
            Node *curr= head;
            Node * prev= head;
            while(curr->next != NULL){
                prev= curr;
                curr=curr->next;
            }
            cout<<"Popped elm is : "<<curr->data<<endl;
            delete curr;
            prev->next= NULL;
            tail= prev;
            size--;
        }
    }
    void deleteAfter(int key){
        if(head == NULL){
            cout<<"List is Empty !!"<<endl; return ;
        }
        else{
            Node* curr= head;
            while(curr != NULL && curr->data !=key){
                curr= curr->next;
            }
            
            if(curr== NULL){
                cout<<"key whose after elm to be deleted not found !!" <<endl;
                return ;
            }
            if(curr->next==NULL){ // Key present but after which no element is present
                    cout<<"No element  present after the key !!"<<endl;
                    return;
            }
            Node*temp=curr->next; //when elm present after key
            curr-> next = temp->next;
            cout<<"Deleted item is:"<<temp->data<<endl;
            delete temp;
            size--;
        }
    }
    void getsize(){
        cout<<"Size of linked list is :"<< size<<endl ;
    }

    void printList(){
        if(head== NULL){
            cout<<"LIST IS EMPTY"<<endl;
            return ;
        }
        Node* curr=head;
        cout<<"Linked list is :";
        while(curr !=NULL){
            cout<<curr->data <<"->";
            curr= curr->next;
        }
        cout<<"NULL"<<endl ;
    }

    int search(int key){
        int index= 0;
        Node* curr= head;
        while(curr != NULL){
            if(curr->data ==key){
                return index;
            }
            curr= curr->next;
            index++ ;
        }
        return -1;
    }
    

};
int main(){
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.printList();
    ll.pop_front();
    ll.pop_back();
    ll.insertAfter(25,20);
    ll.printList();
    ll.getsize();
    ll.deleteAfter(33);
    ll.printList();
    int indx=ll.search(15);
    if(indx != -1){ cout<<"Key found at index :"<<indx<<endl;}
    else{ cout<<"Key not found"<<endl;}
    return 0;
}