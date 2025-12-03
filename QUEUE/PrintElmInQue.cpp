// PRINT all elements of QUEUE without any Extra Space

#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue <int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);
    q.push(55);
    q.push(65);

    int n =q.size() ;
    cout<<"\nPrinting the queue ---> \n";
    while(n--){
        cout<<q.front() <<" ";
        q.push(q.front());
        q.pop() ;
    }
    return 0;
}