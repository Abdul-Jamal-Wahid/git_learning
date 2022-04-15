#include<iostream>
using namespace std;
int  linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"the element is present "<<endl;
        }
    }
            cout<<"elemnet are not present"<<endl;
        
    return -1;
}
int main(){
    int n;
    cout<<"Enter the  size of array:"<<endl;
    cin>>n;
    int arr[9786];
    cout<<"Enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enetr the element you want to search:"<<endl;
    cin>>key;
    linear(arr,n,key);
}