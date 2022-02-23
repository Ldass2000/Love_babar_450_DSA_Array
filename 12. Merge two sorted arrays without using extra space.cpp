//Merge two sorted arrays without using extra space

 #include<bits/stdc++.h>
 using namespace std;
 
 void merge(int n,int m,int a[], int b[])
 {
     for(int i=0;i<n;i++)
     {
         if(a[i]>b[0])
         swap(a[i],b[0]);
         int j=0;
         while((j+1<m) && (b[j]>b[j+1]))
         {
             swap(b[j],b[j+1]);
             j++;
         }
     }
 }

 int main()
 {
     int n,m;
     cin>>n>>m;
     int a[n],b[m];
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<m;i++) cin>>b[i];
     merge(n,m,a,b);
     for(int i=0;i<n;i++) cout<<a[i]<<" ";
     for(int i=0;i<m;i++)  cout<<b[i]<<" ";     
     return 0;
 }
  