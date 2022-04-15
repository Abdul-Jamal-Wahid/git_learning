#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
     int x;
     cin>>x;
     int count=0;
     for(int div=2;div*div<=x;div++){
         if(x%div==0){
             count++;
             break;
         }
         
     }
     if(count==0){
         cout<<"prime"<<endl;
     }else{
         cout<<"not prime"<<endl;
     }
    }
    
}