//Intersection  of two array
//Union of the two arrays can be defined as the set containing distinct elements from both the arrays
// Input:
// 5 4
// 1 2 3 4 5
// 1 2 3 6
//out- 1 2 3

 #include<bits/stdc++.h>
 using namespace std;
 void doIntersection (int n,int m, int a[], int b[])
 {
     set<int>s;
     for(int i=0;i<n;i++)
     s.insert(a[i]);
     for(int i=0;i<m;i++)
     if(s.find(b[i])!=s.end())
     cout<<b[i]<<" ";
 }
 int main()
 {
     int n,m;
     cin>>n>>m;
     int a[n],b[m];
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<m;i++) cin>>b[i];
     doIntersection(n,m,a,b);
     
     return 0;
 }
  