//Implemeting QUEUE usig Array : disadvtg: delete- O(n) time ,costly
#include<iostream>
using namespace std;

class Queue{
    int * arr;
    int size, front, rear;

public:
    Queue(int n){
        arr= new int[n] ;
        size = n ;
        front =-1 , rear =-1 ;
    }

    bool isEmpty(){
        return (front == -1) ;
    }
    void Enqueue(int val){
        if( rear == size -1){
            cout<<"\nQueue overflow !!" ;
            return ;
        }
        if(front == -1){ front = 0 ; }
        rear ++ ;
        arr[rear] = val ;
        cout<<"\nInserted "<<val <<" in the queue " ;
    }

    void Dequeue(){
        if(isEmpty()){
            cout<<"\nQueue underflow !!" ;
            return ;
        }
        cout<<"\nRemoved "<<arr[front]<<" from the queue ";
        for(int i=0;i<rear ; i++){// shifting elm to front side -> takes: O(n)
            arr[i]= arr[i+1] ;
        }
        rear -- ;
    }


// void dequeue(){  // PROBLEM : some emptY spaces not filled
//     if(isEmpty()){
//             cout<<"\nQueue underflow !!" ;
//             return ;
//     }
//     if(front == rear){
//         front = -1, rear = -1;// first n last elm are same-> only 1 elemnt
//     }
//     cout<<"\nRemoved" <<arr[front]<<" from the queue " ;
//     front ++;
// }


    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty " ;
            return -1 ;
        }
        return arr[front] ;
    }
    int isSize(){
        return rear +1 ;
    }

    // void printArr(){
    //     if(isEmpty()){
    //         cout<<"Queue EMPTY !! ";
    //         return;
    //     }
    //     for(int i=0; i<rear ;i++){
    //         cout<<arr[i] <<" " ;
    //     }
    //     cout<<endl ;
    // }
};

int main(){
    Queue Q(5); //works only when we craetred default constructor
                // if it require size =5 , pass it
    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Enqueue(4);
    cout<<"\nTop elemnet is : "<<Q.peek();
    Q.Dequeue();
    Q.Enqueue(5);
    Q.Enqueue(6);
    cout<<"\nNow Top elemnet is : "<<Q.peek();
    cout<<boolalpha<<"\nIs queue empty ? "<< Q.isEmpty() ;
    cout<< "\nSize of queue is : "<<Q.isSize() ;
    // cout<<"\nQueue elements are : "<<Q.printArr();

    return 0;
}