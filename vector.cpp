#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

void display(vector<int> &v) // here &v is used to intialize the name of vector to use it in the method display
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; 
    }
}
signed main()
{
   vector<int> vec1;
   int element;
   for(int i=0;i<5;i++)
   {
    cout<<"enter the elements to be added to the vector"<<endl;
    cin>>element;
    vec1.push_back(element);
   }
   display(vec1);
   return 0;
}