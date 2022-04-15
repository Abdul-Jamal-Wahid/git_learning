
#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int s=1;
    for(int i=0;i<n;i++){
        s*=arr[i];
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[1230];
    cout<<"Enter the elements of a array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int a= sum(arr,n);
    cout<<"the sum of array:"<<a<<endl;
}