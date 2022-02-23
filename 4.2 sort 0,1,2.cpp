//Two POINTER METHOD
//TC- o(n)
//sc- o(1)

 #include<bits/stdc++.h>
 using namespace std;
 void sort012(int n,int a[])
 {
     vector<int>ans;
     for(int i=0;i<n;i++)
     {
         if(a[i]==0)
         ans.push_back(a[i]);
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]==1)
         ans.push_back(a[i]);
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]==2)
         ans.push_back(a[i]);
     }
     for(int i=0;i<n;i++)
     {
         a[i]=ans[i];
     }
 }
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     sort012(n,a);
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
     
     return 0;
 }
  