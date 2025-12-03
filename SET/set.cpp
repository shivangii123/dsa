// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//     set<int> st;

//     st.insert(9);
//     st.insert(8);
//     st.insert(5);
//     st.insert(3);
//     st.insert(7);

//     st.erase(st.begin());//first elm deleted

//     auto x=2; // auto ki jagah int ayega(data type)
//     auto a='c'; //auto ki jagah char ayega

//     auto it=st.begin();
//     while(it!=st.end()){
//         cout<<*it<<endl; ///prints in ascending order
//         it++ ;
//     }

//     cout<<"Size is : "<<st.size()<<endl;
//     return 0;
// }

#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> st;

    st.insert(9);
    st.insert(8);
    st.insert(9);
    st.insert(9);
    st.insert(7);

    // st.erase(st.begin());//first elm deleted


    // auto x=2; // auto ki jagah int ayega(data type)
    // auto a='c'; //auto ki jagah char ayega, bind data type at runtime

    auto it=st.begin();
    while(it!=st.end()){
        cout<<*it<<endl; ///prints in ascending order
        it++ ;
    }

    cout<<"Size is : "<<st.size()<<endl;
    cout<<"count  is : "<<st.count(8)<<endl;

    return 0;
}