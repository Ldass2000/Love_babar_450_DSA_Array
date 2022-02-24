//13.Kadane Algorithm
//Kadane’s Algorithm is an iterative dynamic programming algorithm. It calculates the maximum sum subarray
// ending at a particular position by using the maximum sum subarray ending at the previous position
//Q-->Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) 
//which has the maximum sum and return its sum

//TC->)(N)

// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.

#include<bits/stdc++.h>
using namespace std;

int maxSubArrSum(int n, int a[])
{
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
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
       cout<<maxSubArrSum(n,a);
    }
    return 0;
}
    