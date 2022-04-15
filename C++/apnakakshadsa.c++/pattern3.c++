#include<bits/stdc++.h>
using namespace std;
int main(){
    int col,row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<=row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}