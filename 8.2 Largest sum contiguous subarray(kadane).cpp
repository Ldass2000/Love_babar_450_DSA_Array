//Largest sum contiguous subarray
//kadane algorithm
//TC-o(n) , SC-> o(1)

 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     int ans=INT_MIN;
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum+=a[i];
         if(sum>ans)
         {
             ans=sum;
         }
         if(sum<0)
         {
             sum=0;
         }
     }
     cout<<ans;
     return 0;
 }
  