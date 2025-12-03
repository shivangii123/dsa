#include<iostream>
using namespace std;

int main(){

    char t='.'; //initialize t with dot
    cout<<"enter : ";

    int uc=0,lc=0,dc=0,wc=0,sc=0;

    // for(char t=cin.get();t!='$';t=cin.get()){ //update mein user se i/ple rahe h
    while(t!='$'){
        t=cin.get(); //We want to count whitespaces
        if (t>='A' && t<='Z'){
            uc++ ;
        }
        else if (t>='a' && t<='z'){
            lc++ ;
        }
        else if (t>='0' && t<='9'){
            dc++ ;
        }
        else if (t==' '|t=='\n'|t=='\t'){
            wc++ ;
        }
        else {
            sc++ ;
        }
    }

    cout<<"\nUpper count: "<<uc;
    cout<<"\nLower count: "<<lc;
    cout<<"\nDigit count: "<<dc;
    cout<<"\nWhitespace count: "<<wc;
    cout<<"\nSpecial count: "<<sc-1; //as doller ko count nahi karna andm
                                     //doller is ending char always so -1
    return 0;
}