#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    int div=(int)pow(10,count-1);
    while (div!=0)
    {
        int q=n/div;
        cout<<q<<endl;
        n=n%div;
        div=div/10;
    } 
}