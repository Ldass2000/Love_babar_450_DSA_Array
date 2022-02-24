//33. Minimum swaps required bring elment less equal k together
//arr-> 1 2 5 3 7     k-->3
//          |-|     good=1,2,3   bad=5,7

#include<bits/stdc++.h>
using namespace std;

int minSwaps(int n,int k,int a[])
{
    //Counting good values
    int goodCount=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
        goodCount++;
    }
    
    //counting bad values in first K element
    int bad=0;
    for(int i=0;i<goodCount;i++)
    {
        if(a[i]>k)
        bad++;
    }
    
    
    int i=0,j=goodCount,ans=bad;
    while(j<n)
    {
        //if the element went out of window was bad element
        if(a[i]>k)
        bad--;
         
         //if the new element entered is abd
        if(a[j]>k)
        bad++;
        
        //keeping minimim bad values as ans
        ans=min(bad,ans);
        i++;
        j++;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=minSwaps(n,k,a);
    cout<<res<<endl;
    return 0;
}