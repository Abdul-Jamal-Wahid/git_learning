#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int lowcaes=(ch=='a' || ch=='e' || ch=='i' || ch=='o'||ch=='u');
     int upparcaes=(ch=='A' ||ch== 'E' || ch=='I' || ch=='O'||ch=='U'); 
     if(lowcaes || upparcaes){
         cout<<"Is A vowel:"<<endl;
     }else{
         cout<<"not a volwe:"<<endl;
     }
}