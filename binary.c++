#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int start=0;
    int e=n-1;
    int mid=start+(e-start)/2;
    while (start<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            mid=start+1;
        }
        else{
            mid=e-1;
        }
      mid=start+(e-start)/2;
    }
   
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[900];
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key you want to search:"<<endl;
    cin>>key;
   int x= binary(arr,n,key);
     cout<<"the position present at "<<x<<endl;
}