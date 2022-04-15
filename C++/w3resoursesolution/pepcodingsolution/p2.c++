#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>90){
        cout<<"excellent"<<endl;
    }else if(n>80){
        cout<<"good"<<endl;
    }else if(n>70){
        cout<<"fair"<<endl;
    }else if(n>60){
        cout<<"meets exceptations"<<endl;
    }else{
        cout<<"below par"<<endl;
    }
}