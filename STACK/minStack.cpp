#include<iostream>
using namespace std;

class stack{
    int arr[10];
    int index=0;
    int size=10;

  public :
    void push(int val){
        if(index<size){
            arr[index]==val ;
            index++;
        }
    }

    void pop(){
        index --;
    }

    int top(){
        return arr[index];
    }
    int size(){
        return index ;
    }

};

class min_stack{
    int arr2[10];
    int index=0;
    int size=10;

  public :
    void push(int val){

        if(index<size){
            arr2.index =min(st1.top(), val);
            index++;
        }
    }

    void pop(){
        index --;
    }

    int top(){
        return arr[index];
    }
    int size(){
        return index ;
    }

};



int main(){

    stack st1;
    min_stack st2;


    st1.push(1);
    st1.push(1);



    return 0;
}