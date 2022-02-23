//Minimise the maximum difference between heights
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.

 #include<bits/stdc++.h>
 using namespace std;
 
 int getMinDiff(int a[],int n,int k)
 {
     sort(a,a+n);
     int ans=a[n-1]-a[0];
      int small=a[0]+k;
      int large=a[n-1]-k;
      
      for(int i=0;i<n-1;i++)
      {
          int mi=min(small,a[i+1]-k);
          int mx=max(large,a[i]+k);
          if(mi<0) continue;
          ans=min(ans,mx-mi);
      }
      return ans;
 }

 int main()
 {
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     auto res= getMinDiff(a,n,k);
    cout<<res;
     return 0;
 }
  