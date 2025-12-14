#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value : " ;
    cin>>n;

    char el;
    int nc=0,sc=0,ec=0,wc=0;

    for(int i=0;i<n;i++){
        cin>>el;
        if(el=='N'|el=='n'){
            nc++;
        }
        else if(el=='S'|el=='s'){
            sc++;
        }
        else if(el=='E'|el=='e'){
            ec++;
        }
        else if(el=='W'|el=='w'){
            wc++;
        }
        else {
            cout<<"Enter correct value !!!!" ;
        }
    }

cout<<"\nNorth count is :"<<nc<<endl;
cout<<"\nYou go in this way ---> " ;
    if(nc>sc){
        int a=nc-sc;
        for(int i=0;i<a;i++){
            cout<<"N" ;
        }
    }
    if(sc>nc){
        int b=sc-nc;
        for(int i=0;i<b;i++){
            cout<<"S" ;
        }
    }
    if(ec>wc){
        int c=ec-wc;
        for(int i=0;i<c;i++){
            cout<<"E" ;
        }
    }
    if(wc>ec){
        int d=wc-ec;
        for(int i=0;i<d;i++){
            cout<<"E" ;
        }
    }
    return 0;
}

/////////////   SHORT CUT////////////////////
/*TAKE VRTICAL COUNT(VC) FOR NORTH ,SOUTH INCREMENT FOR NORTH ,DECREASE FOR SOUTH 
   IF (POSITIVE) -> NORTH, (NEGATIVE)--> SOUTH    */

