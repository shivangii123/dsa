#include<iostream>
using namespace std;

class student{
  public:
    string name;
    int rollno;
    int marks ;
  
    student(string n, int r,int m){
        cout<<"its parameterized constructor .." ;
    }
};

int main(){
    student S("ria", 30, 95);

}