#include<iostream>
using namespace std;

class Car{
    public:
    string name;  //data members
    int price;
    int model;

    // default constructor
    Car(){
        cout<<"\nDefault constructor.. "<<endl;
    }
    // Parameterized constructor
    Car(string nm,int pr ,int md){
        cout<<"\nParameterized constructor.."<<endl ;
        name= nm;
        price= pr;
        model = md ;
    }
    // copy constructor
    Car(Car &X){
        cout<<"Copy constructor .. "<<endl ;
        name = X.name;
        price= X.price ;
        model= X.model ;
    }

    // Copy Assignment Operator
    void operator= (Car &X){
        cout<<"Inside Copy Assignment Operator " <<endl ;
        name= X.name;
        price = X.price;
        model = X.model ;
    }

    ~Car(){                    // deleting in reverse order of Obj creation
        cout<<"Deleting Car : "<<name <<endl ;  
    }

    void print(){
        cout<<"Name  : " << name<<endl;
        cout<<"Model : "<< model<<endl;
        cout<<"Price : "<< price<<endl<<endl ;;
    }
};

int main(){
    Car A; // it calls default constructor
    A.name= "Audi" ;
    // dot opert is used to acess data members of the object
    A.price= 90000 ;
    A.model= 2020 ;
    cout<<"Now name is : "<< A.name;

    /*******M-1 To declare then initialize Oject ****** */
    // Car B;  // here we declare an object
    // B.name = "BMW "; // then we initialize ,assign alues to it
    // B.price= 450000 ;
    // B.model= 2022 ; 

    /***** M-2 To do at one step****/
    Car B("BMW", 45000, 2022);//So best to declare +initlize at one g
    Car C("Breeza",90000, 2023) ;

    // Copy Constructor :to create new objects from already existing object
    // 1) Car A = B;  
    // 2) Car A(B) ;
    Car D = A;  //it copies 

    // Copy assignment Operator
    D= C ; // updating proprties of Car D obj, not creting new object

    
    A.print() ;// print details of obj A
    B.print() ; // print details of obj B
    C.print() ; // print details of obj C
    D.print() ; // print details of obj D 


    return 0;
}