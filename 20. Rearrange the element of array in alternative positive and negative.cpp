//Rearrange the element of array in alternative positive and negative item with O(1) extra  space 

#include<bits/stdc++.h>
using namespace std;

void swap(int a[],int i,int j)
{
    int c=a[i];
    a[i]=a[j];
    a[j]=c;
}

void reArraneps(int n,int a[])
{
    sort(a,a+n);
   int i=0,j=n-1;
   while(i<j)
   {
       while(i<=n-1 && a[i]>0) 
       i+=1;
       while(j>=0 && a[j]<0)
       j-=1;
       
       if(i<j) swap(a,i,j);
   }
   if(i==0 || i==n) return ;
   int k=0;
   while(k<n  && i<n)
   {
       swap(a,k,i);
       i=i+1;
       k=k+2;
   }
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    reArraneps(n,a);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}