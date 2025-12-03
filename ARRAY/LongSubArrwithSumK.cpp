// #include<iostream>
// using namespace std;

// int main(){

//     int n;cout<<"array size : "; cin>>n;
//     int k;cout<<"TARGET sum is : " ;cin>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //************************BRUTE FORCE APPROACH *******************************/
// int  ln=0, s= -1 , e= -1;
//     for(int i=0;i<n;i++){ // traverse every starting postition
//         int sum=0 ;
//         for(int j=i;j<n;j++){
//             sum +=arr[j];
            
//             if(sum== k && (j-i+1)>ln){
//                 ln =(j-i+1);
//                 s=i, e=j ;
                
//             }
//         }
//     }

//     if(s== -1){
//         cout<<"No Sub-Array with sum "<<k<< " found " ;
//     }
//     else{
//         cout<<"Longest Sub-Array with sum "<<k<<" is : ";
//         for(int i=s;i<=e;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<"Longest length is : "<<ln;
//     }

//     return 0;
// }


// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     //*********************** M-2 USING HASHING  ***********/
    
//     int n;cout<<"array size : "; cin>>n;
//     int k;cout<<"TARGET sum is : " ;cin>>k;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     unordered_map<int,int> preSumMap;
//     int sum=0, maxln=0 , s=-1, e =-1;
//     for(int i=0;i<n;i++){
//         sum += arr[i];

//         if(sum== k){ //if current prefix sum equals k,subarray from 0 to i has the target sum.
//             maxln = max(maxln, i+1) ;
//             s=0 , e=i;
//         }
//         int rem= sum-k; //If sum(i) - sum(j) = k

//         if(preSumMap.find(rem) != preSumMap.end() ){ // If rem exists in map, we found a subarray with sum k
//             int ln = i-preSumMap[rem];  //length of that subarray
//             maxln =max(maxln , ln);
//             s=preSumMap[rem] +1 ;
//             e=i;
//         }

//         // Map.end()->indicate: search has failed — key not found in hashmap
//         if(preSumMap.find(sum)==preSumMap.end()){// if sum was not present in map ,end tak kahi nhi mila
//             preSumMap[sum]= i ; ///key=sum and , value-ith index
//         }
//     }


//     if(s== -1){
//         cout<<"No Sub-Array with sum "<<k<< " found " ;
//     }
//     else{
//         cout<<"\nLongest Sub-Array with sum "<<k<<" is : ";
//         for(int i=s;i<=e;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<"\nLongest length is : "<<maxln;
//     }
    
//     return 0;
// }


#include<iostream>
using namespace std;

//*********************** M-3 USING 2 POINTERS (OPTIMAL)  ***********/

int main(){


    int n;cout<<"array size : "; cin>>n;
    int k;cout<<"TARGET sum is : " ;cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // iterate j ,add each elem to sum , is sum exced ,shrink subarr
    int i=0;
    int sum=0, ln=0 , s= -1, e =-1;
    for(int j=0;j<n;j++){
        sum +=arr[j]; // Add arr[j] to current window

            while(i<=j&& sum>k ){ // sum exceed -> shrink
            sum =sum - arr[i];
            i++ ;
            }

        if(sum ==k){
            s=i, e=j;
            ln =max(ln, (j-i+1));
        }
    }
if(s== -1){
    cout<<"No SubArray found ";
}
else {
    cout<<"\nLomgets Subarray is : " ;
    for(int i=s;i<=e;i++){
        cout<<arr[i];
    }
    cout<<"\nlength of subarary is : "<<ln<<endl ;
}


    return 0;
}