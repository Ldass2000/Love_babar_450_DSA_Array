// 34. Minimum no of operation required to make an array Palindrome
//arr-->1  4    5    1
//      | i++   j--  |
//      i   i==j     j





#include<bits/stdc++.h>
using namespace std;

int findMinOp(int n, int a[])
{
    int ans=0,i,j;
    for( i=0;j<n-1;i<=j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        
        else if(a[i]>a[j])
        {
            j--;
            a[j]+=a[j+1];
            ans++;
        }
        else 
        {
            i++;
            a[i]+=a[i-1];
            ans++;
        }
    }
    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[n];
   findMinOp(n,a);
    
    return 0;
}