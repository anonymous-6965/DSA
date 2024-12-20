#include <iostream>
using namespace std;
#include<string.h>
int main() {
//    // Your code goes here
//    char c; 
//    cout<<"write a char"<<endl;
//    cin>>c;
//    char a=c+1;
//    cout<<"the character after the one entered is "<<a<<endl;
//    int d,e;
//    cin>>d>>e;
//    cout<<d<<" "<<e<<endl;
//int ar[3];
//for(int i=0;i<3;i++)
//{
//    cout<<"Enter the marks of "<<i+1<<"th student"<<endl;
//    cin>>ar[i];
//}
//for(int i=0;i<3;i++)
//{
//    cout<<"marks of student "<<i+1<<" are "<<ar[i]<<endl;
//}
string name;
getline(cin,name);
cout<<name<<endl;
cout<<name.length()<<endl;
cout<<name.substr(0,5)<<endl;
cout<<name.substr(5,7)<<endl;
}