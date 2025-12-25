#include<iostream>
using namespace std;

class Car{
    private :
        int price ;
    public:
    string name;  //data members
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

    void setPrice(int p){
        price= p ;
    }

    int getPrice(){
        return price ;
    }
    // Copy Assignment Operator
    void operator= (Car &X){
        cout<<"Inside Copy Assignment Operator " <<endl ;
        name= X.name;
        price = X.price;
        model = X.model ;
    }

    void print(){
        cout<<"Name  : " << name<<endl;
        cout<<"Model : "<< model<<endl;
        cout<<"Price : "<< price<<endl<<endl ;;
    }
};

int main(){
    Car A( "Audi", 90000, 2020);
    cout<<"Price of obj A is : "<< A.getPrice()<<endl ;

    Car B("BMW", 45000, 2022);
    Car C("Breeza",90000, 2023) ;
 
    Car D = A;  //it copies the object

    // Copy assignment Operator
    D= C ; // updating proprties of Car D obj, not creting new object

    A.setPrice(100);

    cout<<"Now Price of A : "<< A.getPrice()<<endl ;
    A.print() ;// print details of obj A
    B.print() ; // print details of obj B
    C.print() ; // print details of obj C
    D.print() ; // print details of obj D 


    return 0;
}