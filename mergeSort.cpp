#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
void merge(int l,int r,int mid){
    int l_sz=mid-l+1;
    int L[l_sz+1];
    int r_sz=r-(mid+1)+1;
    int R[r_sz+1];
    for(int i=0;i<l_sz;++i){
        L[i]=a[i+l];
    }
    for(int i=0;i<r_sz;++i){
        R[i]=a[i+mid+1];
    }
    L[l_sz]=R[r_sz]=INT_MAX;
    int l_i=0;
    int r_i=0;
    for(int i=l;i<=r;++i){
        if(L[l_i] <= R[r_i]){
            a[i]=L[l_i];
            l_i++;
        }
        else{
            a[i]=R[r_i];
            r_i++;
        }
    }
}
void mergesort(int l,int r){
    int mid=(l+r)/2;
    if(l==r) return;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    mergesort(0,n-1);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
