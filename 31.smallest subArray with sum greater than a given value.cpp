// 31.smallest subArray with sum greater than a given value
//arr->> 1,4,45,6,10,19
//x-->51
//ans--> 4,45,6(count of 3)==3 ans

//TC---> O(N)

#include<bits/stdc++.h>
using namespace std;

int smallestsubArr(int n,int x,int a[])
{
    int sum=0,min=n-1;
     int start=0,end=0;
     while(end<n)
     {
         while(sum<=x && end<n)
         sum+=a[end++];
         while(sum>x && start<n)
         {
             if(end-start<min)
             min=end-start;
             sum-=a[start++];
         }
     }
     return min;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=smallestsubArr(n,x,a);
    cout<<ans<<endl;
    return 0;
}