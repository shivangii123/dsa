// #include<iostream>
// using namespace std;

// void generator(string s,int i,string& ans){
//     //base case
//     if(i==s.size()){
//         cout<<ans<<endl;
//         return ;
//     }

//     //recursive case
//     // here e have2 casse of fincluded/notinclding s[i]
//     generator(s,i+1,ans);//s[i] is not included in ans

//     ans += s[i];
//     generator(s,i+1,ans); //s[i] is included in ans
// }

// int main(){


//     string s;cout<<"Enter : ";
//     cin>>s;

//     string a="";
//     generator(s,0,a);// to pass by ref , we have to pass a variable

//     return 0;
// }


/////////////////////By reference
#include<iostream>
using namespace std;

void generator(string s,int i,string& ans){
    //base case
    if(i==s.size()){
        cout<<ans<<endl;
        return ;
    }

    //recursive case
    // here e have2 casse of fincluded/notinclding s[i]

    ans += s[i];
    generator(s,i+1,ans);//s[i] is not included in ans

    ans.pop_back();
    generator(s,i+1,ans); //s[i] is included in ans
}

int main(){


    string s;cout<<"Enter : ";
    cin>>s;

    string a="";
    generator(s,0,a);// to pass by ref , we have to pass a variable

    return 0;
}






