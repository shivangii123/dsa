#include<iostream>
using namespace std;

class customer{
    public:
    string name="shivangi";
    int age;
    char gender;
    int credits;


public:
    customer(){ // by defalut constr is over written by this our constrctor
        cout<<"Constructor is invoked "<<endl ;
    }

    customer(string n,int a,char g,int c){
        name=n;
        age=a;
        gender=g;
        credits=c;
        // cout<<"Constructor is invoked "<<name<<endl ;

    }


    // string getName() const{//print privvate properties 
    //     name="xyz";  //ERROR CAN'T CHANGE
    //     return name;
    // }

    string getName() const{//print privvate properties 
        return name;
    }

    int getAge(){
        return age;
    }

    void setName(string n){//SETTER FUNCTION NEVER CONSTANT bcoz here we wnat to modify value
        name=n;
    }


};

int main(){

    customer c1 ;
    
    customer c2("john",20,'f',500);

    customer c3("alia",35,'m',650);

    cout<<c2.name <<c2.age<<endl ;
c2.setName("abcdee");

    customer c4=c2;

    return 0;
}