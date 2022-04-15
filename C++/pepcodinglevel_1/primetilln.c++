#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,h;
    cin>>l>>h;
    for(int i=l;i<=h;i++){
        int count=0;
        for(int div=2;div*div<=i;div++){
            if(i%div==0){
                count+=1;
                break;
            }
        }
        if(count==0){
            cout<<i<<endl;
        }
    }
}