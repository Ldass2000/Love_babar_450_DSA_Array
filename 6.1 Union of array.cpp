//union of two array
//Union of the two arrays can be defined as the set containing distinct elements from both the arrays
// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5. 
 #include<bits/stdc++.h>
 using namespace std;
 int doUnion(int n,int m,int a[],int b[])
 {
     set<int>s;
     for(int i=0;i<n;i++)
     s.insert(a[i]);
     for(int i=0;i<m;i++)
     s.insert(b[i]);
     return s.size();
 }
 int main()
 {
     int n,m;
     cin>>n>>m;
     int a[n],b[m];
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<m;i++) cin>>b[i];
    cout<<doUnion(n,m,a,b)<<endl;
     
     return 0;
 }
  