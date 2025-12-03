#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor for this "Node class"
    Node(int val){
        data=val;
        next=NULL;
    }

};

int main(){
    //creating object 
    Node* n= new Node(12);
    cout<<n->data <<" "<<n->next<<endl;

  return 0;
}