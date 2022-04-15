/*2. Write a program in C++ to print the sum of two numbers. Go to the editor
Sample Output:
Print the sum of two numbers :*/

#include<iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
int main(){
    int a,b;
    cin>>a>>b;
    int s=sum(a,b);
    cout<<"The sum of  a and b is:"<<s<<endl;
}