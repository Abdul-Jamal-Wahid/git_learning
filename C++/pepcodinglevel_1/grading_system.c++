#include<bits/stdc++.h>
using namespace std;
int main(){
     int marks;
      cin>>marks;
      if(marks>90){
          cout<<"excellent"<<endl;
      }
      else if(marks>80){
          cout<<"good"<<endl;
      }
       else if(marks>70){
          cout<<"fair"<<endl;
      }
       else if(marks>60){
          cout<<"meets exceptions"<<endl;
      }else{
          cout<<"below par"<<endl;
      }
}