// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int el, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == el)
      return mid;

    if (array[mid] < el)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
    int n,item ;

    cout<<"Enter size of array : ";
    cin>>n ;
    cout<<endl;

    int *arr=new int[n] ;
    for(int i=0;i<n;i++){
        cout<<"Enter " <<i <<" element : " ;
        cin>> arr[i] ;
    }

    cout<<"\nEnter element to be searched : " ;
    cin>> item ;
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int x = 4;
    // int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, item, 0, n - 1);
    if (result == -1)
        cout<<item << " is Not found!! ";
    else
        printf("Element is found at index %d", result);
}


////////////////////////////////////

// #include<iostream>
// using namespace std;

// int binarySr(int arr[],int high,int low,int el){
//   while(low<high){
//     int mid=(high+low )/2;

//     if(arr[mid]== el){
//       return mid;
//     }
//     else if(el>arr[mid]){
//       // low=mid+1;
//       binarySr( arr, high, mid+1, el);
//     }
//     else{
//     binarySr(arr,mid-1, low, el);
//     }
//   }
//   return -1;
// }

// int main(){
//   int arr[]={5,4,3,2,1} ;
//   cout<<"index is : " << binarySr(arr,0,4,2);
//   return 0;
// }