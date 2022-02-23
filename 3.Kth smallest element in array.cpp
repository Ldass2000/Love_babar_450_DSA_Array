//Two POINTER METHOD
//TC- o(n)
//sc- o(1)

 #include<bits/stdc++.h>
 using namespace std;
 int kthSmallest(int a[],int l,int r,int k)
 {
     priority_queue<int>pq;
     for(int i=l;i<=r;i++)
     {
         pq.push(a[i]);
         
         if(pq.size()>k)
         pq.pop();
     }
     return pq.top();
 }
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     int k;
     cin>>k;
     cout<<kthSmallest(a,0,n-1,k);
     
     return 0;
 }
  