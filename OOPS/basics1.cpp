#include<iostream>
using namespace std;

class Car{
   public:
    string name;  //data members
    int price;
    int model;
};

int main(){
    Car A;
    A.name= "Audi" ;
    // dot opert is used to acess data members of the object
    A.price= 90000 ;
    A.model= 2020 ;

    Car B;
    B.name = "BMW ";
    B.price= 450000 ;
    B.model= 2022 ;

    cout<<"Name : "<<A.name<<endl;
    cout<<"Model : "<<A.model<<endl;
    cout<<"Price : "<<A.price<<endl<<endl ;

    cout<<"Name : "<<B.name<<endl;
    cout<<"Model : "<<B.model<<endl;
    cout<<"Price : "<<B.price<<endl<<endl ;;

    return 0;
}

/* what if we hae 50 properties inside this class, do we rite al those 
it will be too lengthy  , so make function -print() define once and CALL multiple times*/