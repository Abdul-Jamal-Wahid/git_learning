#include<iostream>
#include<climits>
using namespace std;

void reverse (int arr[],int n){
     int st=0;
       int e=n-1;
 
      while(st<=e)
      {
        swap(arr[st],arr[e]);
        st++;
        e--;
      }
  
}
void printingarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[90];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    printingarray(arr,n);
    
}