/*3. Write a program in C++ to find Size of fundamental data types. Go to the editor
Sample Output:
Find Size of fundamental data types :*/

#include<iostream>
using namespace std;
int main(){
    cout<< sizeof(char)<<endl;
    cout<< sizeof(short)<<endl;
    cout<< sizeof(int)<<endl;
    cout<< sizeof(long)<<endl;
    cout<< sizeof(long long)<<endl;
    cout<< sizeof(float)<<endl;
    cout<< sizeof(double)<<endl;
    cout<< sizeof(long double)<<endl;
    cout<< sizeof(bool)<<endl;
}
/* 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes*/