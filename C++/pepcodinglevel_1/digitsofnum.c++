#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int dig=0;
    while(temp>0){
     temp=temp/10;
     dig++;
    }
    int div=(int)pow(10,dig-1);
    while(div!=0){
        int q=n/div;
        cout<<q<<endl;
       
       n=n%div;
        div=div/10;

    }
}