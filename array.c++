#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[1090];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the greater no is"<<getmax(arr,n)<<endl;
    cout<<"the smallest  no is"<<getmin(arr,n)<<endl;
}