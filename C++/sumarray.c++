#include<iostream>
#include<climits>
using namespace std;
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int arr[120];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=sum(arr,n);
    cout<<a<<endl;
}