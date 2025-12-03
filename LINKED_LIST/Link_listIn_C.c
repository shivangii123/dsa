#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* next;

};

struct Node * search(int item,struct Node* head){
        struct Node *ptr;
        ptr=head;
        while(ptr!=NULL){
            if(item== ptr->data){
                return ptr;
            }
            ptr=ptr->next;
        }
        return ptr;
    }

int main(){
    int i,n,item ,find;
    struct Node *ptr,*head,*temp,*ans ;
    printf("Enter the no.of nodes : ");
    scanf("%d",&n);
    printf("\nEnter the value of first node : ");
    scanf("%d",&item);

    temp=(struct Node*) malloc(sizeof(struct Node));
    temp->data=item;
    temp->next=NULL;
    head=temp;
    ptr=head;

    for(i=1;i<n;i++){
        printf("Enter value of next node :");
        scanf("%d",&item);
        temp=(struct Node*) malloc(sizeof(struct Node));
        temp->data=item;
        temp->next=NULL;
        ptr->next=temp;
        ptr=ptr->next;
    }

    printf("\nThe nodes are: \n");
    ptr=head;
    for(i=0;i<n;i++){
        printf("Data : %d, Next : %p\n", ptr->data, (void*)ptr->next);
        ptr=ptr->next;
    }

    printf("\n Enter the value to be searched : ");
    scanf("%d",&find);

    ans=search(find,head);
    if(ans==NULL){
    printf("\n Value not found !! ");
    }
    else{
        printf("Value found at : %p ",ans->next);
    }

    
    


}
