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
        cout<<"Constructor is invoked "<<n<<endl ;

    }
};

int main(){

    customer c1 ;
    cout<<c1.name<<" "<<c1.age <<endl;//gies garbage value
    
    customer c2("john",20,'f',500);
    cout<<c2.name <<" "<<c2.age <<" "<<c2.gender<<" "<<c2.credits<<endl;

    customer c3("alia",35,'m',650);
    cout<<c3.name <<" "<<c3.age <<" "<<c3.gender<<" "<<c3.credits<<endl;



    return 0;
}