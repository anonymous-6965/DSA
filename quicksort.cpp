//g++ quicksort.cpp -o ex && ex < input.txt > output.txt
#include<bits/stdc++.h>
using namespace std;

int compare (const void* a,const void* b)
{
   return(*(int*)a - *(int*)b);
}
int main()
{
   int ar[4];
   int i=4;
   while(i){
      cin>>ar[--i];
   }
   int* pt2=ar;
   qsort(ar,4,sizeof(int),compare);
   cout<<*ar<<endl;
   cout<<*(ar+1)<<endl;
   cout<<*(ar+2)<<endl;
   cout<<*(ar+3)<<endl;
}